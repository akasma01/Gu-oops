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
    static float  
    public:
    void input();
    void display();
    void calPercentage();
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
    static
}


int main()
{
    student s[2];
    for(int i=0;i<2;i++)
    {
        s[i].input();
        s[i].calPercentage();
    }
    
       for(int i=0;i<2;i++)
    {
        s[i].display();
    }
            

    return 0;
}




=========================================

     void ClassOne::sort(ClassOne *obj,int n)       
     {
      ClassOne temp;
      int i, j;
      for (i = 0; i < n; i++)
      for (j = n - 1; j > i; j--)
        if (obj[j].valueData <obj[j - 1].valueData )
           {
            temp = obj[j];
            obj[j] = obj[j - 1];
            obj[j - 1] = temp;
         }
         }
     ...
      int main()
      {
     ClassOne obj[3],a;
        for(int i=0;i<3;i++)
         obj[i].readdata();
        a.sort(obj,3);
        ...
  }
