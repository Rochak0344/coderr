#include<iostream>
using namespace std;
class solution
{
    private:
        int num1,num2,add;
    public:
        int sum(int num1, int num2)
        {
            add=num1+num2;
            return add;
        }
        void display()
        {
            cout<<"Sum="<<add;
        }
};  
int main(){
    solution s1;
    s1.sum(12,5);
    s1.display();
    cout<<endl;
    return 0;
}    
