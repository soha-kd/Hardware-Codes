module sevenSeg(w, x, y, z, a, b, c, d, e, f, g);
input w, x, y, z;
output  a, b, c, d, e, f, g;
wire w1, w2;
and (w1 , x, z);
and (w2 , ~x, ~z);
or(a, w1, w2, w, y); 
wire w3, w4;
and (w3, ~y, ~z);
and (w4, y, z);
or(b, w3, w4, ~x);
or (c, x, z, ~y);
wire w5, w6, w7, w8;
and (w5, ~x, ~z);
and (w6, x, ~y, z);
and (w7, ~x, y);
and (w8, y, ~z);
or (d, w, w5, w6, w7, w8);
wire w9, w10;
and (w9, ~x, ~z);
and (w10, y, ~z);
or (e, w9, w10);
wire w11, w12, w13;
and (w11, ~y, ~z);
and (w12, x, ~y);
and (w13, x, ~z);
or (f, w, w11, w12, w13);
wire w14, w15, w16;
and (w14, x, ~y);
and (w15, y, ~z);
and (w16, ~x, y);
or (g, w, w14, w15, w16);
endmodule