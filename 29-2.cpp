#include<iostream>
using namespace std;

class Complex
{
    int real;
    int imag;

public:
    void setData(int r, int i ) {  real=r;  imag=i;  }

    Complex () {  real=0; imag=0; }

    operator int() {  return real;  }

    void display_complex(){  cout<<"real = "<<real<<"     imaginary = "<<imag<<endl;}
};

int main ()
{
    Complex c1;
    c1.setData(3,4);
    c1.display_complex();
    cout<<endl;

    int x;
    x=c1;
    cout<<x<<endl;

    return 0;
}
