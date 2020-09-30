`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:48:06 07/07/2019 
// Design Name: 
// Module Name:    CRC 
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
module CRC(crc_out ,dataIn);
  output reg[3:0] crc_out;
  input [63:0] dataIn;
  integer i;
  
  reg [63:0]temp_out;
  reg [4:0]g_x = 5'b11001;
  
  always@(*) begin
		temp_out=dataIn;
		for(i=63;i>=0;i=i-1)
			begin
				g_x[0]=temp_out[i] ^ g_x[3];
				g_x[1]=g_x[0];
				g_x[2]=g_x[1];
				g_x[3]=g_x[2]^ g_x[0];
			
			end		
  end
 always@(*)
	begin
	crc_out = g_x;
	end
 endmodule 
 
 
 
 
 