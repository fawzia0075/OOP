#include<iostream>
using namespace std;
class myclass
{
public:
    void display(int x)
    {
        cout<<"integer="<<x<<endl;
    }
    void display(double y)
    {
        cout<<"double="<<y<<endl;
    }
};
int main()
{
    myclass ob;
    ob.display(8);
    ob.display(4.3);
}
