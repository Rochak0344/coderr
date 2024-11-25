#include<iostream>
using namespace std;
class Item
{
    private:
        int a,b;

    public:
        void setData(int x, int y) { a=x; b=y;}
        void showData(){ cout<<"a="<<a<<" b="<<b<<endl;}
        friend Item operator+(int,Item);
        friend Item operator-(Item);
        friend Item operator+(Item, Item); // first wala Item return type hai
       friend void f1(Item);  //friend function declare/create in class section & write Item because passing item type value

};
Item operator+(int k, Item i)
{
    Item temp;
    temp.a=i.a+k;
    temp.b=i.b;
    return temp;
}
Item operator-(Item i)
{
    Item temp;
    temp.a=-i.a;
    temp.b=-i.b;
    return temp;
}
Item operator+(Item X, Item Y)
{
    Item temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return temp;
}
void f1(Item i)  //define function and friend function write only declare time not in definition time and not using membership level because it is not a member function & receiving Item i
{
    int c=i.a+i.b;
    cout<<"sum is "<<c;

}
int main()
{
    Item i1,i2,i3; // object of Item class is i1
    i1.setData(3,5); /* setData mm function hai isliye object.function call krn h 
                        setData ka caller object i1 h and a,b i1 ke honge*/                
    i2.setData(9,4);
    i3=5+i1;
    i3=i1+i2; // i3=operator+(i1,i2);
    i3.showData();
    f1(i1); //function calling and it is not MM function => it is call without using object.function & i1 passing as an argument for access of a,b data in nmm f1()
    cout<<endl;
    return 0;
}