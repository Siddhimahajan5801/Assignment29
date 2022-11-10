#include <iostream>
using namespace std;

class Time
{
    int t;

public:
    Time () {  t=0;  }

    Time (int min) {  t=60*min; }

    void display () {  cout<<endl<<"Time = "<<t<<" seconds"<<endl;  }
};

int main ()
{
    int duration;
    cout<<"Enter time duration in minutes : ";
    cin>>duration;

    Time t1 = duration;
    t1.display();

    return 0;
}
