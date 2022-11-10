#include<iostream>
using namespace std;

class Complex
{
    int real;
    int imag;

public:
    Complex(int r, int i ) {  real=r;  imag=i;  }

    Complex () {  real=0; imag=0; }

    Complex (int n){  real=n;  imag=n;  }

    void display_complex(){  cout<<"real = "<<real<<"     imaginary = "<<imag<<endl;}
};

int main ()
{
    Complex c1;

    int x=5;

    c1=x;
    c1.display_complex();

    return 0;
}
