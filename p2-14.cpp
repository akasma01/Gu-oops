#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

    template <typename t>
    void genArray(int size)
    {   
        int i;
         t *a= new t[size];
        for(i=0;i<size;i++)
        {
            cout<<"Enter data in element "<<i+1<<" :\n";
            cin>>a[i];
        }
        for(i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                if(a[i]<a[j])
                {
                    t temp = a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }

        cout<<"The sorted array is:\n";
         for(i=0;i<size;i++)
        {
                cout<<a[i]<<"\n";
        }
    }

int main()
{
    int size,ch;
    cout<<"Enter the size of array\n";
    cin>>size;
    while (1)
    {
        cout<<"choose any of the follwing option to proceed\n";
        cout<<"1.Create and sort array of integers\n";
        cout<<"2.Create array of float\n";
        cout<<"3.Create array of strings\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice\n";
        cin>>ch;
        switch (ch)
        {
        case 1:
            genArray<int>(size);
            break;
        case 2:
            genArray<float>(size);
            break;
        case 3:
            genArray<string>(size);
            break;
        case 4:
            exit(1);
        default:
            cout<<"Enter valid option\n";
            break;
        }
    }
    
    
}