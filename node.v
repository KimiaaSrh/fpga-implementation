`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:32:53 07/06/2019 
// Design Name: 
// Module Name:    node 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module node(input clock,input [3:0] CRC,input [63:0] data,input [3:0] senderAddress,input [3:0] receiverAddress, input [3:0] nodeAddress,
 inout main_bus, inout isFree,input [63:0] DataOut
    );
	 
	 reg [79:0] senderPacket;
	 reg [79:0] receiverPacket;
	 reg startBit=0;
	 reg endBit=1;
	 reg [3:0] myCRC;
	 reg [1:0] dataSize;
	 reg [63:0] Nodedata;
	 integer counter_bus1=-1;
	 integer counter_bus2=-1;
	 reg main_bus_temp;
	 reg isFree_temp;
	 integer counter_ack=1;
	 
	 initial begin
	 myCRC=CRC;
	 Nodedata=data;
	 end
	 
	 wire [3:0] crc_out;
	 	 
	 always @(posedge clock) begin
	 
	  senderPacket={startBit,senderAddress,receiverAddress,dataSize,Nodedata,myCRC,endBit};

	 // if recieve completed and start bit of new packet is on bus
	 if(main_bus==0 && counter_bus2== -1)
			 counter_bus2=78;
	 // if send completed and bus is free to send
	 if(isFree==1 && counter_bus1== -1)
			 counter_bus1=79;
	 
		//if this node is sender 
		if(nodeAddress==senderAddress && (counter_bus1<80 && counter_bus1>=0))
		begin
			isFree_temp=0; 
			//put packet on bus
			//if(counter_bus1>=0)
			//begin
				main_bus_temp =senderPacket[counter_bus1];
				counter_bus1=counter_bus1-1;
			//end
		end
		if(counter_ack==0)
			   isFree_temp=1;
		if(counter_bus1<=-1)
				main_bus_temp=0;
		//if this node is receiver 
		else
		begin
			//receive packet on bus
			if(counter_bus2<80 && counter_bus2>=0)
			begin
				receiverPacket[counter_bus2]=main_bus;
				counter_bus2=counter_bus2-1;
			end
			//check if packet was correct
			if(counter_bus2==-1 && receiverPacket[74:71]==nodeAddress)
			begin
				Nodedata=receiverPacket[68:5];
				myCRC=receiverPacket[4:1];
				if(counter_ack>=0 && crc_out==myCRC)
				begin
					main_bus_temp=1;
					counter_ack=counter_ack-1;
				end
			end
			if(counter_bus2==-1 && counter_ack==-1)
           counter_ack=1;
		end
	 
	

end

	 CRC checkCRC(crc_out,Nodedata);


	
assign main_bus = main_bus_temp;
assign isFree = isFree_temp;
assign DataOut=Nodedata;

endmodule
