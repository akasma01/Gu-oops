#include<iostream>
#include<conio.h>
using namespace std;
int top=-1;
template <typename t>
class stack
{
    t s[100];
    public:
    void push();
    void pop();
    void peep(int);
    void display(); 

};
    template <typename t>
    void stack<t>::push()
    {
        t data;
        if(top>=100)
        cout<<"stack overflow"<<"\n";
        else
        cout<<"Enter data to push into stack\n";
        cin>>data;
        top++;
        s[top]=data;
    }

    template <typename t>
    void stack<t>::pop()
    {
        t data;
        if(top<0)
        cout<<"stack underflow"<<"\n";
        else
        data=s[top];
        top--;
        cout<<data<<" removed successfully..."<<"\n";
    }
    template <typename t>
    void stack<t>::peep(int index)
    {
        if(top-index+1<0)
        cout<<"stack underflow"<<"\n";
        else
        cout<<s[top-index+1]<<"\n";
    }   
    template <typename t>
    void stack<t>::display()
    {
        if(top<0)
        cout<<"stack underflow"<<"\n";
        else
        for(int i=top;i>=0;i--)
        {
            cout<<s[i]<<"\n";
        }
    } 

int main()
{
    int ch,index;
    stack <float>s;
    while(1)
    {
        cout<<"Select any of the following\n";
        cout<<"1. To Push into stack\n";
        cout<<"2. To Pop from stack\n";
        cout<<"3. To Peep from stack\n";
        cout<<"4. To display stack elements\n";
        cout<<"5. To Exit\n";
        cout<<"Enter your choice\n";
        cin>>ch;

        switch (ch)
        {
        case 1:
            s.push();
            break;
        case 2:
            s.pop();
            break;
        case 3:
            cout<<"Enter index to element in stack\n";
            cin>>index;
            s.peep(index);
            break;
        case 4:
            s.display();
            break;
        case 5:
            exit(1);
        default:
            cout<<"Enter valid option\n";
            break;
        }
    }
    getch();
}