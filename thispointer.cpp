#include<iostream>
using namespace std;
class item
{
    private:
        int a,b;  //instance variable
    public:
        void setData(int a, int b)
        {
            this->a=a;
            this->b=b;
        }
        void showData()
        {
            cout<<"a="<<a<<"b="<<b;
        }
        item greater(item obj)
        {
            if(a+b>obj.a+obj.b)
                return *this;
            else
                return obj;
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