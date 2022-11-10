#include<iostream>
using namespace std;

class Time
{
    int hour;
    int min;

public:
    Time (int h, int m){ hour=h; min=m; }

    Time () { hour=0; min=0; }

    int get_hour() { return hour; }

    int get_min() { return min; }

    void display()
     {
         cout<<"Time is : "<<endl;
         cout<<"hours = "<<hour<<"   minutes = "<<min<<endl;
     }
};

class Minute
{
    int m;

public:
    Minute (int x) {  m=x; }

    Minute () { m=0; }

    Minute (Time t) { m = 60*t.get_hour()+t.get_min();}

    void display(){ cout<<endl<<"Minutes = "<<m<<endl; }
};

int main ()
{
    cout<<"------Before------ "<<endl;
    Time t1(2,30);
    t1.display();

    Minute m1;
    m1.display();

    cout<<endl<<"-------After------ "<<endl;
    m1=t1;

    t1.display();
    m1.display();

    cout<<"------------------ "<<endl;

    return 0;
}
