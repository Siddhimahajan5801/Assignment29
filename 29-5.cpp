#include <iostream>
using namespace std;

class Invent1
{
    int x;
    int y;

public:
    Invent1 (int x1, int y1) {  x=x1;  y=y1; }

    Invent1 () {  x=0;  y=0; }

    operator float () {  return x+y; }

    int get_x() { return x; }

    int get_y() {  return y; }

    void display_invent1()
    {
        cout<<"Invent 1: "<<endl;
        cout<<"x = "<<x<<"   y = "<<y<<endl;
    }

};

class Invent2
{
    int a;
    int b;

public:
    Invent2 (int j, int k){  a=j;  b=k;  }

    Invent2 () { a=0;  b=0;}

    Invent2 (Invent1 i) { a=i.get_x();    b=i.get_y(); }

    void display_invent2()
    {
        cout<<"Invent 2: "<<endl;
        cout<<"a = "<<a<<"   b = "<<b<<endl;
    }
};

int main ()
{
    Invent1 s1(4,5);
    Invent2 d1;

    float tv;
    tv=s1;

    cout<<"tv = "<<tv<<endl<<endl;
    s1.display_invent1();

    d1=s1;
    cout<<endl;
    d1.display_invent2();

    return 0;
}
