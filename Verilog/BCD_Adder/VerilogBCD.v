module VerilogBCD(input w,x,y,z, output a,b,c,d,e,f,g);
	
	wire w1,w2,w3,w4,w5,w6,w7,w8,w9,w10,w11,w12,w13,w14,w15,w16;
	
	and(w1,x,z);
	and(w2,~z,~x);
	or(a,w1,w2,y,w);
	
	and(w3,~y,~z);
	and(w4,y,z);
	or(b,w3,w4,~x);
	
	or(c,x,~y,z);
	
	and(w5,y,~z);
	and(w6,~x,y);
	and(w7,x,~y,z);
	and(w8,~x,~z);
	or(d,w5,w6,w7,w8,w);
	
	and(w9,~x,~z);
	and(w10,y,~z);
	or(e,w9,w10);
	
	and(w11,~y,~z);
	and(w12,~y,x);
	and(w13,~z,x);
	or(f,w11,w12,w13,w);
	
	and(w14,~z,y);
	and(w15,y,~x);
	and(w16,~y,x);
	or(g,w14,w15,w16,w);
endmodule	
