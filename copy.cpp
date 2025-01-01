#include<iostream>
using namespace std;

class coppy
{
    int x,y;
public:
     coppy()
    {
        x=50;
        y=10;
    }
    coppy(coppy &b)
    {
        x=b.x;
        y=b.y;
    }

    void display()
    {
        cout<<"x="<< x<<" "<<"y="<<y<<endl;
    }
};

int main()
{
    coppy int1;
    int1.display();
    coppy int2(int1);
    int2.display();
}
