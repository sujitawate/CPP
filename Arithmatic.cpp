#include<iostream>
using namespace std;

class Arithmatic
{
    private :
        int iNo1;
        int iNo2;
    public:
    Arithmatic()
    {
        iNo1 = 0;
        iNo2 = 0;

    }
    Arithmatic(int A, int B)
    {
        iNo1 = A;
        iNo2 = B;

    }
    int Addition()
    {
        int Ans = 0;
        Ans = iNo1 + iNo2;
        return Ans;
    }
    int Substraction()
    {
        int Ans = 0;
        Ans = iNo1 - iNo2;
        return Ans;
    }
};

    int main()
    {
        Arithmatic obj1(10,7);
        Arithmatic obj2;
        int iRet = 0;

        iRet = obj1.Addition();
        cout<<"Additon is :"<<iRet<<"\n";

        iRet = obj1.Substraction();
        cout<<"Substraction is :"<<iRet<<"\n";

        iRet = obj2.Addition();
        cout<<"Addition is :"<<iRet<<"\n";

        iRet = obj2.Substraction();
        cout<<"Substraction is :"<<iRet<<"\n";

        return 0;
    }
