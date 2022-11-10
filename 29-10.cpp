#include <iostream>
using namespace std;

class Dollar;

class Rupee
{
    float rs;

public:
    Rupee (float x) { rs=x; }

    Rupee () { rs=0; }

    float get_rupee() { return rs; }

    void display() { cout<<endl<<"Rupee = "<<rs<<endl; }
};

class Dollar
{
    float dol;

public:
    Dollar (float d) { dol=d; }

    Dollar () { dol=0; }

    Dollar (Rupee r) { dol= r.get_rupee()/100.0; }

    operator Rupee() { return dol*100; }

    void display () { cout<<endl<<"Dollar = "<<dol<<endl;}
};

int main ()
{
    Rupee r=23;

    cout<<"--Rupee to Dollar conversion-- "<<endl;
    Dollar d=r;
    r.display();
    d.display();

    cout<<endl<<endl<<"--Dollar to Rupee conversion-- "<<endl;
    r=d;
    d.display();
    r.display();
}
