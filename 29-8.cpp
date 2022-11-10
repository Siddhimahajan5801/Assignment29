#include <iostream>
using namespace std;

class Rupee
{
    int rs;

public:
    Rupee (int x) { rs=x;}

    Rupee () { rs=0;}

    operator int () { return rs; }

};

int main ()
{
    Rupee r=10;
    int x=r;

    cout<<x;
    cout<<endl;

    return 0;
}
