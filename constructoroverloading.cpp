#include<iostream>
using namespace std;
class myclass
{
public:
    myclass()
    {
        cout<<"Default constructor."<<endl;
    }
    myclass(int x)
    {
        cout<<"Parameterized constructor."<<endl;
    }
};
int main()
{
    myclass ob;
    myclass ob1(5);
    }
