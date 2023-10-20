module twobitCounterDFF(input clk, d, rst, output reg q);
	always @(posedge clk)
	begin
	if(rst == 1)
		q <= 0;
	else
		q <= d;
	end
endmodule

module twobitCounter(input ck, u, r, output v0, v1);
	wire w1, w2;
	xor(w1, v1, ~v0);
	xor(w2, w1, u);
	twobitCounterDFF d0(ck, ~v0, r, v0);
	twobitCounterDFF d1(ck, w2, r, v1);
	endmodule 