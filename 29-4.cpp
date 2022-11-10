#include <iostream>
using namespace std;

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

    void display_item (){ cout<<"Item = "<<i<<endl; }
};

class Product
{
    int x;
    int y;

public:
    void setData (int a, int b)
    {  cout<<"Data is set"<<endl<<endl;
        x=a;
        y=b; }

    operator Item()
    {
        cout<<"Operator Item() called for Product "<<endl<<endl;
        Item i=x;
        return i;
    }

    void display_product(){  cout<<"x = "<<x<<"  y = "<<y<<endl; }
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
