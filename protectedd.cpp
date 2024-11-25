#include<iostream>
using namespace std;

class person  // me as a programmer to create class person
{
    private:
        int age;
        char name[20];
    protected:
        void setAge(int a) {age=a;}
        void setName(char n[]) { strcpy(name, n);}
    public:
        int getAge() { return age;}
        char* getName() { return name;}
};
class Employee:public person // user2 jo other class banata h taki user1 k code ko access kr sake visibility mode ki help se && public inheritance
{
    private:
        float salary;
    public:
        void setEmployee(int a, char n[], float s)
        {
            //age=a;  age not accessed because age is a private member
            setAge(a);
            setName(n);
            salary=s;
        }
};
int main()  // other programmer or user1
{
    person p1; // user1 jo meri class ka object banata hai and ye sirf public member ko access kr skt h
    Employee e1; // employee class ka user1 hu && agar main function bna rha hu to aur employee ka object bna rha hu to employee ka user1 hun 
}