#include <iostream>
#include <string>

using namespace std;
class date
{
    int day,month,year;
    public:
    void inputDate();
    void display();
    void addDate(int n);
};

void date::inputDate()
{
    cout<<"Enter day\n";
    cin>>day;
    cout<<"Enter month\n";
    cin>>month;
    cout<<"Enter year\n";
    cin>>year;
}

void date::display()
{
    cout<<day<<"-"<<month<<"-"<<year;
}

void date::addDate(int n)
{
    int m=0,d=0,y=0;
    if(n>30)
    {
        while(n>30)
        {
            n=n-30;
            d=n;
            m++;
        }
        
        while(m>12)
        {
            m-=12;
            y++;
        }
    }
    else
    {
    d=n;
    }

    day+=d;
    month+=m;
    year+=y;
    
    while(day>30)
    {
        day-=30;
        month++;
    }
    while(month>12)
    {
        month-=12;
        year++;
    }
    
    cout<<"The new date is: \n";
    display();
}


int main()
{
    date d;
    int n;
    d.inputDate();
    cout<<"Enter the no. of days you want to add\n";
    cin>>n;
    d.addDate(n);
    
    
    return 0;
}
