`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:17:30 07/06/2019 
// Design Name: 
// Module Name:    main 
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
module main( input clock,

input [3:0] CRC1,input [3:0] CRC2,input [3:0] CRC3,input [3:0] CRC4,input [3:0] CRC5,input [3:0] CRC6,
input [3:0] CRC7,input [3:0] CRC8,input [3:0] CRC9,input [3:0] CRC10,input [3:0] CRC11,input [3:0] CRC12,input [3:0] CRC13,
input [3:0] CRC14,input [3:0] CRC15,input [3:0] CRC16,

input [63:0] Data1,input [63:0] Data2,input [63:0] Data3,input [63:0] Data4,input [63:0] Data5,
input [63:0] Data6,input [63:0] Data7,input [63:0] Data8,input [63:0] Data9,input [63:0] Data10,input [63:0] Data11,
input [63:0] Data12,input [63:0] Data13,input [63:0] Data14,input [63:0] Data15,input [63:0] Data16,

input [3:0] senderAddress, input [3:0] receiverAddress,

output [63:0] DataOut1,output [63:0] DataOut2,output [63:0] DataOut3,output [63:0] DataOut4,output [63:0] DataOut5,output [63:0] DataOut6,
output [63:0] DataOut7,output [63:0] DataOut8,output [63:0] DataOut9,output [63:0] DataOut10,output [63:0] DataOut11,output [63:0] DataOut12,
output [63:0] DataOut13,output [63:0] DataOut14,output [63:0] DataOut15,output [63:0] DataOut16
    );
	 
	 
	 wire  main_bus;
	 wire isFree=1;
	node node1(clock,CRC1,Data1,senderAddress,receiverAddress,4'b0000,main_bus,isFree,DataOut1);
	node node2(clock,CRC2,Data2,senderAddress,receiverAddress,4'b0001,main_bus,isFree,DataOut2);
	node node3(clock,CRC3,Data3,senderAddress,receiverAddress,4'b0010,main_bus,isFree,DataOut3);
	node node4(clock,CRC4,Data4,senderAddress,receiverAddress,4'b0011,main_bus,isFree,DataOut4);
	node node5(clock,CRC5,Data5,senderAddress,receiverAddress,4'b0100,main_bus,isFree,DataOut5);
	node node6(clock,CRC6,Data6,senderAddress,receiverAddress,4'b0101,main_bus,isFree,DataOut6);
	node node7(clock,CRC7,Data7,senderAddress,receiverAddress,4'b0110,main_bus,isFree,DataOut7);
	node node8(clock,CRC8,Data8,senderAddress,receiverAddress,4'b0111,main_bus,isFree,DataOut8);
	node node9(clock,CRC9,Data9,senderAddress,receiverAddress,4'b1000,main_bus,isFree,DataOut9);
	node node10(clock,CRC10,Data10,senderAddress,receiverAddress,4'b1001,main_bus,isFree,DataOut10);
	node node11(clock,CRC11,Data11,senderAddress,receiverAddress,4'b1010,main_bus,isFree,DataOut11);
	node node12(clock,CRC12,Data12,senderAddress,receiverAddress,4'b1011,main_bus,isFree,DataOut12);
	node node13(clock,CRC13,Data13,senderAddress,receiverAddress,4'b1100,main_bus,isFree,DataOut13);
	node node14(clock,CRC14,Data14,senderAddress,receiverAddress,4'b1101,main_bus,isFree,DataOut14);
	node node15(clock,CRC15,Data15,senderAddress,receiverAddress,4'b1110,main_bus,isFree,DataOut15);
	node node16(clock,CRC16,Data16,senderAddress,receiverAddress,4'b1111,main_bus,isFree,DataOut16);


endmodule
