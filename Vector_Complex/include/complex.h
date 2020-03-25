#include<iostream>

class complex
{
    double re, img;
    public:
        complex();
        complex(double , double );
        ~complex();
        complex(const complex&);
        void afisare();
        double modul();
        complex ssqrt();
        void setRe(double x);
        void setImg(double x);
        double getRe();
        double getImg();
    complex operator+(const complex&);
    friend complex operator*(const complex&, int x);
    complex operator-(const complex&);
    complex operator*(const complex&);
    complex operator/(const complex&);
   /* std::istream& operator>>(std::istream&, complex&);
    std::ostream& operator<<(std::ostream&, const complex&)*/


};
