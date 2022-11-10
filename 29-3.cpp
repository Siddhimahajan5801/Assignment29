#include <iostream>
using namespace std;


class Product
{
    int x;
    int y;

public:
    void setData (int a, int b)
    {
        cout<<"Data is set"<<endl<<endl;
        x=a;
        y=b;
    }

     void display_product(){  cout<<"x = "<<x<<"  y = "<<y<<endl; }

     int get_x() { return x;}

     };

class Item
{
    int i;

public:
    Item (int a)
    {
          cout<<"parameter constructor called for Item "<<endl<<endl;
          i=a;
    }

    Item ()
     {
        cout<<"Default Constructor called for Item "<<endl<<endl;
        i=0;
     }

     Item (Product p) { i=p.get_x(); }

    void display_item (){ cout<<"Item = "<<i<<endl; }

};

int main ()
{
    Item i1;
    Product p1;

    p1.setData(3,4);
    cout<<"Product Info : "<<endl;
    p1.display_product();

    cout<<endl<<"i1=p1 "<<endl;
    i1=p1;
    i1.display_item();

    return 0;
}
