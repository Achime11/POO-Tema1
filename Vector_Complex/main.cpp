#include <iostream>
#include "complex.h"
#include "vector_complex.h"

int main()
{

/*
complex A(2,3);
complex B(4,6);
complex C=A+B;
C.afisare();

complex D=B-A;
D.afisare();

complex E=A*B;
E.afisare();
complex F=B/A;
F.afisare();
complex G(0,2);
G.ssqrt();
A.modul();
B.setRe(9);
std::cout<<B.getRe()<<"\n";
B.afisare();
B.setImg(10);
std::cout<<B.getImg()<<"\n";
B.afisare();
complex H(5,6);
complex I(3,7);
complex J(1,3);
complex delta;
complex x1,x2;
complex ceva;
ceva=H*J;
delta=I*I-ceva*4;
I.setRe(-I.getRe());
I.setImg(-I.getImg());
I.afisare();
(delta.ssqrt()).afisare();
x1=(I+delta.ssqrt())/(H*4);
x2=(I-delta.ssqrt())/(H*4);
x1.afisare();
x2.afisare();
*/
complex B(3,6);
complex D(2,6);
B.modul();
vector_complex A(5,B);
A.afisare();
vector_complex C(A);
C.afisare();
C.vmodul();
C.seti(4,D);
C.afisare();
C.vsort();
C.afisare();
complex E=C.geti(1);
E.afisare();
C.suma();
A.afisare();
C.afisare();
C.produs(A,C);
return 0;
}
