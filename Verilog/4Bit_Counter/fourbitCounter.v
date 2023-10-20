module fourbitCounterDFF(input clk , d,rst,output reg q);

	always @(posedge clk) 
	begin
		if (rst==1)
			q<=0;
		else
			q<=d;
	end		
	
endmodule 

module fourbitCounter(ck, u, r, v0, v1, v2, v3);
	input ck, u, r;
	output v0, v1, v2, v3;
	wire w1, w2, w3, w4, w5, w6, w7, w8, w9;
	wire a1, a2, a3, a4, a5, a6, a7; 
	wire b1, b2, b3, b4, b5;
	
	and(w1, u, v3, ~v1);
	and(w2, u, v3, ~v0);
	and(w3, u, v3, ~v2);
	and(w4, u, ~v3, v2, v1, v0);
	and(w5, ~u, ~v3, ~v2, ~v1, ~v0);
	and(w6, ~u, v3, v2);
	and(w7, ~u, v3, v0);
	and(w8, ~u, v3, v1);
	or(w9, w1, w2, w3, w4, w5, w6, w7, w8);
	
	
	
	and(a1, ~u, v2, v0);
	and(a2, ~u, v2, v1);
	and(a3, ~u, ~v2, ~v1, ~v0);
	and(a4, u, ~v1, v2);
	and(a5, u, v2, ~v0);
	and(a6, u, ~v2, v1, v0);
	or(a7, a1, a2, a3, a4, a5, a6);
	
	
	
	and(b1, ~u, ~v1, ~v0);
	and(b2, ~u, v1, v0);
	and(b3, u, ~v1, v0);
	and(b4, u, v1, ~v0);
	or(b5, b1, b2, b3, b4);
	
	
	
	
	fourbitCounterDFF d0(ck, ~v0, r, v0);
	fourbitCounterDFF d1(ck, b5, r, v1);
	fourbitCounterDFF d2(ck, a7, r, v2);
	fourbitCounterDFF d3(ck, w9, r, v3);
	endmodule 