module MSDFF(Q,Qbar,D,C);
output Q,Qbar;
input D,C;
wire NotC,NotD,NotY,Y,D1,D2,Ybqr,Y1,Y2;

assign NotD=~D;
assign NotC=~C;
assign NotY=~Y;
assign D1=~(D&C);
assign D2=~(C&NotD);
assign Y=~(D1&Ybar);
assign Ybar=~(Y&D2);
assign Y1=~(Y&NotC);
assign Y2=~(NotY&NotC);
assign Q=~(Qbar&Y1);
assign Qbar=~(Y2&Q);

endmodule