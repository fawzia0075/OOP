#include<iostream>'
using namespace std;
class myclass
{
private:
    int value;
public:
    void setvalue(int x)
    {
        value=x;
    }
    int getvalue()
    {
    return value;
    }
};
int main()
{
    myclass ob;
    ob.setvalue(20);
    cout<<"Value="<<ob.getvalue();
}
