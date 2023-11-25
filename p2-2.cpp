#include<iostream>
#include<conio.h>
using namespace std;
class arrMul
{
    int *a;
    int s;
    public:
    arrMul(){}

    arrMul(int n)
    {
        a=new int[n];
        s=n;
    }

    int getSize()
    {
        return s;
    }
    
    void setData()
    {
        int data;
        for(int i=0;i<s;i++)
        {
            cout<<"Enter data in Element "<<i+1<<"\n";
            cin>>data;
            a[i]=data;
        }
    }

    void dispData()
    {
        for(int i=0;i<s;i++)
        {
            cout<<"Element "<<i+1<<" -> "<<a[i]<<"\n";
        }
    }
    void operator *(int x)
    {
        for(int i=0;i<s;i++)
        {
            a[i]*=x;
        }
    }
friend void operator *(int n,arrMul &m);


};

void operator *(int n,arrMul &m)
{
    int size=m.getSize();
    for(int i=0;i<size;i++)
    {
        m.a[i]*=n;
    }
}
int main()
{
    int n;
    cout<<"Enter the No. of elemets you want to store in your array\n";
    cin>>n;
    arrMul a(n);
    a.setData();
    a.dispData();
    cout<<"using normal operator overloading\n";
    a*5;
    a.dispData();
    cout<<"using normal operator overloading through Friend Function\n";
    2*a;
    a.dispData();
    getch();
}