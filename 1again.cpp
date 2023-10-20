/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;
class student{
    int roll,marks[3];
    string name;
    float per = 0;
    public:
    void input();
    void display();
    void calPercentage();
    friend student sort(student s[],int n);
};

void student::input()
{
        cout<<"Enter the roll no. of the student\n";
        cin>>roll;
        cout<<"Enter the name of the student\n";
        cin>>name;
        for(int i=0;i<3;i++)
        {
        cout<<"Enter the marks of subject "<<i+1<<" \n";
        cin>>marks[i];
        }
}


void student::display()
{
       
        cout<<"The roll no. of the student is "<<roll<<"\n";
        cout<<"The name of the student is "<<name<<"\n";
        for(int i=0;i<3;i++)
        {
        cout<<"The marks of subject "<<i+1<<"is :"<<marks[i]<<"\n";
        }
        cout<<"The Percentage of the student is "<<per<<"\n";
         cout<<"-------------------------------------\n";
        
}

void student::calPercentage()
{   
    for(int i=0;i<3;i++)
    {
        per+=marks[i];
    }
    per=per/3;
}

student sort(student s[],int n)
{
    student temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i].per>s[j].per)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    
    cout<<"From friend\n\n";
    for(int i=0;i<n;i++)
    {
        s[i].display();
    }
}


int main()
{
    //student s[2],n;
    int n;
    cout<<"Enter the No. of students";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        s[i].input();
        s[i].calPercentage();
    }
    
   sort(s,n);
    
    cout<<"From main";
       for(int i=0;i<n;i++)
    {
        s[i].display();
    }
            

    return 0;
}




