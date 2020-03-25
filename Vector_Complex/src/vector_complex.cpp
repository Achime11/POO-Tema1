#include "complex.h"
#include "vector_complex.h"
#include<iostream>
#include<math.h>

vector_complex::vector_complex(int n){
int i;
for(i=1;i<=n;++i)
this->v[i].setRe(0);
this->v[i].setImg(0);
}
vector_complex::vector_complex(int n, complex x){
this->nr=n;
int i;
double a=x.getRe();
double b=x.getImg();
for(i=1;i<=nr;++i){
this->v[i].setRe(a);
this->v[i].setImg(b);}
}
vector_complex::~vector_complex(){
nr=0;
std::cout<<"distruge numarul\n";
}
void vector_complex::afisare(){
    int i;
    for(i=1;i<=nr;++i)
    {
        double re=v[i].getRe();
        double img=v[i].getImg();
        if(img>0){
        std::cout<<re<<"+"<<img<<"*i ";
        }
        else{
            if(img==0)
                std::cout<<re<<" ";
            else std::cout<<re<<img<<"*i ";
        }
    }
    std::cout<<'\n';
}
vector_complex::vector_complex(vector_complex &other)
{
this->nr=other.nr;
int i;
for(i=1;i<=nr;++i)
{
    double re=other.v[i].getRe();
    this->v[i].setRe(re);
    double img=other.v[i].getImg();
    this->v[i].setImg(img);
}
}
void vector_complex::vmodul(){
int i;
double x;
for(i=1;i<=nr;++i){
    x=v[i].modul();
    std::cout<<x<<" ";
}
std::cout<<'\n';
}
void vector_complex::seti(int i,complex aux){
    double x=aux.getRe();
    double y=aux.getImg();
    v[i].setRe(x);
    v[i].setImg(y);
}
complex vector_complex::geti(int i){
    return v[i];
}
void vector_complex::vsort(){
int i,j;
double x,y;
for(i=1;i<=nr;++i)
    for(j=i+1;j<=nr;++j)
    {
    x=v[i].modul();
    y=v[j].modul();
    if(x>y)
    {
        double xre=v[i].getRe();
        double ximg=v[i].getImg();
        double yre=v[j].getRe();
        double yimg=v[j].getImg();
        v[i].setRe(yre);
        v[i].setImg(yimg);
        v[j].setRe(xre);
        v[j].setImg(ximg);
    }
    }
}
void vector_complex::suma()
{
    int i;
    complex x;
    for (i=1;i<=nr;++i)
    {
        x=x+v[i];
    }
    x.afisare();
}
void vector_complex::produs(vector_complex a,vector_complex b)
{
    int i;
    complex x,y;
    for(i=1;i<=nr;++i)
    {
        y=a.v[i]*b.v[i];
        x=x+y;
    }
    x.afisare();
}
