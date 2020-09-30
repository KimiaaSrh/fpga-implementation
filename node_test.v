`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:48:43 07/07/2019
// Design Name:   node
// Module Name:   D:/com/fpga project/fpga_project/node_test.v
// Project Name:  fpga_project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: node
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module node_test;

	// Inputs
	reg clock;
	reg [3:0] CRC;
	reg [63:0] data;
	reg [3:0] senderAddress;
	reg [3:0] receiverAddress;
	reg [3:0] nodeAddress;
	reg [63:0] DataOut;

	// Bidirs
	wire main_bus;
	wire isFree;

	// Instantiate the Unit Under Test (UUT)
	node uut (
		.clock(clock), 
		.CRC(CRC), 
		.data(data), 
		.senderAddress(senderAddress), 
		.receiverAddress(receiverAddress), 
		.nodeAddress(nodeAddress), 
		.main_bus(main_bus), 
		.isFree(isFree), 
		.DataOut(DataOut)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
		CRC = 0;
		data = 10;
		senderAddress = 0;
		receiverAddress = 0;
		nodeAddress = 0;
		DataOut = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always 
	begin
	#100
	clock=~clock;
	end
      
endmodule

