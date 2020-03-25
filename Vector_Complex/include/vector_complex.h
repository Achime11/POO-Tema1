#include <iostream>
class vector_complex
{
    int nr;
    complex v[101];
    public:
        vector_complex(int);
        vector_complex(int , complex);
        ~vector_complex();
        vector_complex(vector_complex&);
        void afisare();
        void vmodul();
        void vsort();
        complex ssqrt();
        void seti(int,complex);
        complex geti(int);
        void suma();
        void produs(vector_complex,vector_complex);


};
