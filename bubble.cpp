#include<iostream>
using namespace std;
class bubble
{
    int n=5,temp;
    int a[];
public:
    bubble(int input[])
    {
        for(int i=0;i<n;i++)
        {
        a[i]=input[i];
        }
    }

    void sort()
    {
        int i,j,temp;

    for(i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    }
    void display()
    {
          cout<<"Sorted array elements are:"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    }
};
int main()
{
    int a[]={75,73 ,38 ,39,172};
    bubble sorter (a);
    sorter.sort();
    sorter.display();
}
