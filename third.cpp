#include<iostream>
using namespace std;
class item
{
    private:
        int a,b;
    public:
        void setData(int a,int b)
        {
            this->a=a;  //right side a&b=local variable
            this->b=b; //left side a&b this k h & this current object(i1) ko point kr rha 
        }
        void showData()
        {
            cout<<"a="<<a<<" b="<<b<<endl;
        }
        item greater(item obj)
        {
           if(a+b > obj.a+obj.b) // a+b=>i1 ka data & obj.a+obj.b=>i2 ka data
                return *this; // here return the object & only write this then it return address 
            else
                return obj; // i2 ka data obj me copy ho gaya h
        }
        void display()
        {
            
        }
};
int main()
{
    item i1,i2,i3;
    i1.setData(10,20);
    i2.setData(8,20);
    i3=i1.greater(i2);
    cout<<endl;
    return 0;
}