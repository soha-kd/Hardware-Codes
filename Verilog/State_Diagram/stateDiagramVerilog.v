module D_ff(input clk , d,rst,output reg q);

	always @(posedge clk) 
	begin
		if (rst==1)
			q<=0;
		else
			q<=d;
	end		
	
endmodule

module stateDiagramVerilog(c,x,reset,W);

	D_ff d0(c,o2,reset,v0);
	D_ff d1(c,o3,reset,v1);

	input c , x , reset;
	output W;
	wire v1,v0 , o0,o1,o2,o3,o4,o5;
	
	and(o0,x,v0);
	and(o1,x,v1);
	or(o2,o0,o1);
	
	and(o3,x,~v1);
	
	and(o4,~x,v0);
	and(o5,~x,v1);
	or(W,o4,o5);
endmodule	

