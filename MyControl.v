`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:  KWU
// Engineer: SWL
// 
// Create Date:    03/17/2021 
// Module Name:    MyControl 
// Project Name:   Single Cycle Processor
//
// Revision: 
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module MyControl(op,func,RegDst,Jump,Branch,MemtoReg,ALUop,ALUsrc,ALUctrl,MemWrite,DatWidth,RegWrite,RegDatSel,ExtMode);
	input [5:0] op, func;
	output reg MemtoReg, ExtMode, MemWrite, RegWrite;
	output reg [1:0] RegDst, RegDatSel, Jump, DatWidth, ALUsrc;
	output reg [2:0] Branch;
	output reg [4:0] ALUop; 
	output reg [3:0] ALUctrl;

	always@(*) begin
		if(op==6'b000000) begin   // R_TYPE
      if (func==6'b101010) begin    // R-type slt
  			ALUop    = 5'b10000;	//set less than
  			ALUctrl  = 4'b0000;	//[1] should be initialized to 0.
  			RegDst   = 2'b01;		//destination is rd
  			ALUsrc   = 2'b00;		//register file port b
  			RegWrite = 1'b1;    //register file write 
  			MemtoReg = 1'b0;    //write ALU data to register   
  			MemWrite = 1'b0;    //Don't write a value. 
        DatWidth = 2'bxx;		//don't care
  			Jump     = 2'b00;    //do not use jump address 
  			Branch   = 3'b000;	//pc+4  
  			RegDatSel= 2'b00;		//ALU data
  			ExtMode  = 1'bx;		//don't care
  		end
      else if (func==6'b100111) begin    // R-type nor
  			ALUop    = 5'b00010;	//bitwise NOR
  			ALUctrl  = 4'b0000;	//[1] should be initialized to 0.
  			RegDst   = 2'b01;		//destination is rd
  			ALUsrc   = 2'b00;		//register file port b
  			RegWrite = 1'b1;    //register file write 
  			MemtoReg = 1'b0;    //write ALU data to register   
  			MemWrite = 1'b0;    //Don't write a value. 
        DatWidth = 2'bxx;		//don't care
  			Jump     = 2'b00;    //do not use jump address
  			Branch   = 3'b000;	//pc+4  
  			RegDatSel= 2'b00;		//ALU data
  			ExtMode  = 1'bx;		//don't care
  		end
		else if (func==6'b000111) begin    // R-type srav
  			ALUop    = 5'b01111;	//s shift right arithmatic
  			ALUctrl  = 4'b0001;	//shift amount is rs
  			RegDst   = 2'b01;	//destination is rd
  			ALUsrc   = 2'b00;	//register file port b
  			RegWrite = 1'b1;	//register file write    
  			MemtoReg = 1'b0;	//write ALU data to register    
  			MemWrite = 1'b0;	//Don't write a value.  
        DatWidth = 2'bxx;	//don't care
  			Jump     = 2'b00;	//do not use jump address  
  			Branch   = 3'b000;//pc+4
  			RegDatSel= 2'b00;	//ALU data
  			ExtMode  = 1'bx;	//don't care
  		end
		else if (func==6'b011000) begin    // R-type mult
  			ALUop    = 5'b01001;	//axb
  			ALUctrl  = 4'b0000;	//[1] should be initialized to 0.
  			RegDst   = 2'bxx;		//don't care
  			ALUsrc   = 2'b00;		//register file port b
  			RegWrite = 1'b0;    //register file write 
  			MemtoReg = 1'bx;    //don't care
  			MemWrite = 1'b0;    //Don't write a value. 
        DatWidth = 2'bxx;		//don't care
  			Jump     = 2'b00;    //do not use jump address
  			Branch   = 3'b000;	//pc+4  
  			RegDatSel= 2'bxx;		//don't care
  			ExtMode  = 1'bx;		//don't care
  		end
		else if (func==6'b010010) begin    // R-type mflo
  			ALUop    = 5'b01000;	//reserved
  			ALUctrl  = 4'b0000;	//[1] should be initialized to 0.
  			RegDst   = 2'b01;		//destination is rd
  			ALUsrc   = 2'bxx;		//don't care
  			RegWrite = 1'b1;    //register file write 
  			MemtoReg = 1'b0;    //write ALU data to register   
  			MemWrite = 1'b0;    //Don't write a value. 
        DatWidth = 2'bxx;		//don't care
  			Jump     = 2'b00;    //do not use jump address
  			Branch   = 3'b000;	//pc+4  
  			RegDatSel= 2'b01;		//write LO to register file
  			ExtMode  = 1'bx;		//don't care
  		end
		else if (func==6'b001000) begin    // R-type jr
  			ALUop    = 5'bxxxxx;	//don't care
 			ALUctrl  = 4'bxxxx;	//don't care
			RegDst   = 2'bxx; 	//don't care
			ALUsrc   = 2'bxx;		//don't care    
			RegWrite = 1'b0;  	//Don't write a value. 
			MemtoReg = 1'bx;  	//don't care 
			MemWrite = 1'b0;  	//Don't write a value.  
      DatWidth = 2'bxx;			//don't care
			Jump     = 2'b10;    //user $rs
			Branch   = 3'bxxx;  	//Don't care
			RegDatSel= 2'bxx;		//don't care
			ExtMode  = 1'bx; 		//don't care
  		end
      else begin    // UNDEFINED INSTRUCTION. DO NOT MODIFY.
  			ALUop    = 5'bxxxxx; RegDst   = 2'bxx; ALUsrc   = 2'bxx;
  			RegWrite = 1'bx;     MemtoReg = 1'bx;  MemWrite = 1'bx;    
        DatWidth = 2'bxx;    Jump     = 2'bxx; Branch   = 3'bxxx;
        RegDatSel= 2'bxx;    ExtMode  = 1'bx;  ALUctrl  = 4'bxxxx;
  		end
		end
		else if(op==6'b000100) begin // beq
			ALUop    = 5'b00110;	//a-b   
 			ALUctrl  = 4'b0000;	//[1] should be initialized to 0.
			RegDst   = 2'bxx; //don't care    
			ALUsrc   = 2'b00; // register file port b
			RegWrite = 1'b0;	//Don't write a value.   
			MemtoReg = 1'bx;  //don't care
			MemWrite = 1'b0;  //Don't write a value. 
      DatWidth = 2'bxx;		//don't care
			Jump     = 2'b00;	//do not use jump address       
			Branch   = 3'b100;	//branch if zero
			RegDatSel= 2'bxx;	//don't care
			ExtMode  = 1'b1; //sign extend
		end
		else if(op==6'b001000) begin // addi
			ALUop    = 5'b00100;	//add
 			ALUctrl  = 4'b0000;	//[1] should be initialized to 0.
			RegDst   = 2'b00; 	//destination is rt
			ALUsrc   = 2'b01;		//immediate value    
			RegWrite = 1'b1;  	//register file write 
			MemtoReg = 1'b0;  	//write ALU data to register 
			MemWrite = 1'b0;  	//Don't write a value.  
      DatWidth = 2'bxx;			//don't care
			Jump     = 2'b00;    //do not use jump address
			Branch   = 3'b000;  	//pc+4
			RegDatSel= 2'b00;		//ALU data
			ExtMode  = 1'b1; 		//sign extend
		end 
		else if(op==6'b000011) begin // jal
			ALUop    = 5'bxxxxx;	//don't care
 			ALUctrl  = 4'bxxxx;	//don't care
			RegDst   = 2'b10; 	//destination is $31
			ALUsrc   = 2'bxx;		//don't care    
			RegWrite = 1'b1;  	//register file write 
			MemtoReg = 1'bx;  	//don't care 
			MemWrite = 1'b0;  	//Don't write a value.  
      DatWidth = 2'bxx;			//don't care
			Jump     = 2'b00;    //do not use jump address
			Branch   = 3'b011;  	//jump to pc+imm16
			RegDatSel= 2'b11;		//write pc to regiter file
			ExtMode  = 1'bx; 		//don't care
		end 
		else if(op==6'b000111) begin // bgtz
			ALUop    = 5'b00110;	//a-b
 			ALUctrl  = 4'b0000;	//[1] should be initialized to 0.
			RegDst   = 2'bxx; 	//don't care
			ALUsrc   = 2'b10;		//zero    
			RegWrite = 1'b0;  	//Don't write a value. 
			MemtoReg = 1'bx;  	//don't care 
			MemWrite = 1'b0;  	//Don't write a value.  
      DatWidth = 2'bxx;			//don't care
			Jump     = 2'b00;    //do not use jump address
			Branch   = 3'b111;  	//branch if positive
			RegDatSel= 2'bxx;		//don't care
			ExtMode  = 1'b1; 		//sign extend
		end 
		else if(op==6'b001110) begin // xori
			ALUop    = 5'b00011;	//xor
 			ALUctrl  = 4'b0000;	//[1] should be initialized to 0.
			RegDst   = 2'b00; 	//destination is rt
			ALUsrc   = 2'b01;		//immediate value    
			RegWrite = 1'b1;  	//register file write 
			MemtoReg = 1'b0;  	//write ALU data to register 
			MemWrite = 1'b0;  	//Don't write a value.  
      DatWidth = 2'bxx;			//don't care
			Jump     = 2'b00;    //do not use jump address
			Branch   = 3'b000;  	//pc+4
			RegDatSel= 2'b00;		//ALU data
			ExtMode  = 1'b0; 		//zero extend
		end 
		else if(op==6'b001010) begin // slti
			ALUop    = 5'b10000;	//set less than
  			ALUctrl  = 4'b0000;	//[1] should be initialized to 0.
  			RegDst   = 2'b00;		//destination is rt
  			ALUsrc   = 2'b01;		//immediate value 
  			RegWrite = 1'b1;    //register file write 
  			MemtoReg = 1'b0;    //write ALU data to register   
  			MemWrite = 1'b0;    //Don't write a value. 
        DatWidth = 2'bxx;		//don't care
  			Jump     = 2'b00;    //do not use jump address 
  			Branch   = 3'b000;	//pc+4  
  			RegDatSel= 2'b00;		//ALU data
  			ExtMode  = 1'b1;		//sign extend
		end 
		else begin   // UNDEFINED INSTRUCTION. DO NOT MODIFY.
			ALUop    = 5'bxxxxx; RegDst   = 2'bxx; ALUsrc   = 2'bxx;  
			RegWrite = 1'bx;     MemtoReg = 1'bx;  MemWrite = 1'bx;
      DatWidth = 2'bxx;    Jump     = 2'bxx; Branch   = 3'bxxx;  
			RegDatSel= 2'bxx;    ExtMode  = 1'bx;  ALUctrl  = 4'bxxxx;
		end
	end
endmodule
