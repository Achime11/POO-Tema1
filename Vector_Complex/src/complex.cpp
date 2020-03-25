#include "complex.h"
#include<iostream>
#include<math.h>

complex::complex(){
this->re=0;
this->img=0;
}
complex::complex(double x, double y){
this->re=x;
this->img=y;
}
complex::~complex(){
re=0;
img=0;
std::cout<<"distruge numarul\n";
}
void complex::afisare(){
    if(img>0){
    std::cout<<re<<"+"<<img<<"*i\n";
    }
    else{
        if(img==0)
            std::cout<<re<<"\n";
        else std::cout<<re<<img<<"*i\n";
    }
}
complex::complex(const complex &other){
this->re=other.re;
this->img=other.img;
}

complex complex::operator+(const complex &A){
complex C;
C.re=this->re+A.re;
C.img=this->img+A.img;
return C;
}
complex complex::operator-(const complex&A){
    complex C;
C.re=this->re-A.re;
C.img=this->img-A.img;
return C;
}
complex complex::operator*(const complex &A){
complex C;
C.re=(this->re)*A.re-(this->img)*A.img;
C.img=(this->re)*A.img+(this->img)*A.re;
return C;
}
complex operator*(const complex &A, int x){
complex C;
C.re=A.re*x;
C.img=A.img*x;
return C;
}
complex complex::operator/(const complex &A){
complex C;
C.re=(this->re)/A.re+(this->img)/A.img;
C.img=(this->re)/A.img+(this->img)/A.re;
return C;
}
complex complex::ssqrt(){
complex C;
C.re=sqrt((re+sqrt(re*re+img*img)/2));
C.img=(img/2)*sqrt(2/(re+sqrt(re*re+img+img)));
if (C.img>0)
        return C;/*
std::cout<<C.re<<"+"<<C.img<<"*i\n";

else{
    if(C.img==0){
        std::cout<<C.re<<"\n";
    }
    else std::cout<<C.re<<C.img<<"*i\n";
}*/
}
double complex::modul(){
double x;
x=sqrt(re*re+img*img);
return x;
}
void complex::setRe(double x){
re=x;
}
void complex::setImg(double x){
img=x;
}
double complex::getRe(){
return re;
}
double complex::getImg(){
return img;
}
