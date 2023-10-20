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
    int month=0,d=0,year=0;
    if(n>30)
    {
        while(n>30)
        {
            n=n-30;
            month++;
        }
        while(month>12)
        {
            month-=12;
            year++;
        }
    }
    else
    {
    d=n;
    }
    cout<<d<<"\n";
    cout<<this->day<<"\n";
    this->day+=d;
    this->month+=month;
    this->year+=year;
    cout<<this->day<<"\n";
    
    while(this->day>30)
    {
        this->day-=30;
        this->month++;
    }
    while(this->month>12)
    {
        this->month-=12;
        this->year++;
    }
    
    cout<<"The new date is: \n";
    this->display();
}


int main()
{
    date d;
    int n;
    d.inputDate();
    cout<<"Enter the no. of days you want to add\n";
    cin>>n;
    d.addDate(30);
    
    
    return 0;
}
