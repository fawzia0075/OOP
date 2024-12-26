#include<iostream>
using namespace std;

class student{
    public:
           int id;
           double gpa;

        void display()
        {
             cout<<id<<endl<<gpa<<endl;
        }

        student(int x,double y)
        {
             id=x;
            gpa=y;
        }

        student()
        {
            cout <<"Default constructor"<<endl;
        }

};
int main()
{
    student ob;

  student Faysal(101,3.89);
  Faysal.display();

  student mitu(102,3.93);
  mitu.display();
}

