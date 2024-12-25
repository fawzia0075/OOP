#include <iostream>
using namespace std;
class Dhaka
{
public:
void Mymensingh()
{
cout << "Dhaka is the capital of Bangladesh." <<endl;
}
};
class Bangladesh
{
public:
void Mymensingh()
{
cout << "Welcome to Bangladesh 2.0" <<endl;
}
};
class Chittagong : public Dhaka, public Bangladesh
{
    public:
void Trishal()
{
    Dhaka::Mymensingh();
    Bangladesh::Mymensingh();
}
};
int main()
{
Chittagong c;
c.Trishal();
}
