#include<iostream>
using namespace std;

class parameter
{
public:
    int age;
    string name;

    parameter(string n,int a)
    {
        name=n;
        age=a;
    }

    void display()
    {
        cout<<name<<endl<<age;
    }

};

int main()
{
    parameter ob1=parameter("mitu",22);
    ob1.display();
}
