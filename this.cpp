#include<iostream>
using namespace std;

class Demo
{
    public:
        int iNo1;
        int iNo2;
    
    Demo(int i, int j)
    {
        iNo1 = i;
        iNo2 = j;
    }

    void Fun(int A, int B)
    {
        cout<<"Inside Fun :"<<this->iNo1<<"\n";
        cout<<"Inside Fun :"<<this->iNo2<<"\n";
    }
    void Gun(int A)
    {
        cout<<"Inside Gun :"<<this->iNo1<<"\n";
        cout<<"Inside Gun :"<<this->iNo2<<"\n";
    }
};

int main()
{
    Demo obj1(11,21);
    Demo obj2(51,101);

    obj1.Fun(10,20);
    obj2.Gun(10);

    return 0;
}