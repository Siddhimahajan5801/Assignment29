#include<iostream>
using namespace std;

class Dollar
{
    int dollars;

public:
    Dollar (int x) { dollars=x; }

    Dollar() { dollars=0;}

    void display(){ cout<<"Dollars = "<<dollars<<endl<<endl;}
};

int main ()
{
    int x=50;
    Dollar d;

    d=x;
    d.display();

    return 0;
}
