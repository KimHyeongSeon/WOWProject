
module mux4_1tb;

reg I0, I1, I2, I3;
reg S0, S1;
wire Out;

mux4_1 mux4_1tb(Out, I0, I1, I2, I3, S0, S1);

initial
begin

I0 = 0; I1 = 1; I2 = 1; I3 = 0; S0 = 0; S1 = 0;
#10 S1 = 0; S0 = 0;
#10 S0 = 0; S1 = 1;
#10 S0 = 1; S1 = 0;
#10 S0 = 1; S1 = 1;

end
endmodule
