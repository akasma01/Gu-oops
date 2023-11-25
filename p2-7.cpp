#include<iostream>
#include<conio.h>
using namespace std;
class time1
{
    int hour,minute,second;
    public:
    time1(){};
    time1(int h,int m,int s)
    {
        hour=h;
        minute=m;
        second=s;

    }

    void operator +(int sec)
    {
        second+=sec;
        while(second>=60)
        {
            second-=60;
            minute++;

        }
         while(minute>=60)
        {
            minute-=60;
            hour++;
            if(hour==24)
            hour=0;
        }
    }


    void operator -(int sec)
    {
        int s= sec%60;
        int m = sec/60;
        second-=s;
        minute-=m;
        if(second<0)
        {
            minute--;
            second+=60;
        }

        if(minute<0)
        {
            hour--;
            minute+=60;
        }
        if(hour<0)
        {
            hour=23;
        }
    }


    void showTime()
    {
        cout<<hour<<"-"<<minute<<"-"<<second<<"\n";
    }

    void operator =(time1 t);
    bool operator <(time1 t);
    bool operator >(time1 t);
    bool operator <=(time1 t);
    bool operator >=(time1 t);
    time1 operator ++();
    time1 operator ++(int);
    time1 operator --();
    time1 operator --(int);

};

void time1::operator =(time1 t)
{
    second=t.second;
    minute=t.minute;
    hour=t.hour;
}

bool time1::operator <(time1 t)
{
    if(hour>t.hour)
    {
        return false;
    }
    else if(hour<t.hour)
    {
        return true;
    }
    else if(hour==t.hour)
    {
        if(minute>t.minute)
        {
            return false;
        }
        else if(minute<t.minute)
        {
            return true;
        }
        else if(minute==t.minute)
        {
            if(second>t.second)
            {
                return false;
            }
            else if(second<t.second)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else 
    {
        return false;
    }
}

bool time1::operator >(time1 t)
{
        if(hour>t.hour)
    {
        return true;
    }
    else if(hour<t.hour)
    {
        return false;
    }
    else if(hour==t.hour)
    {
        if(minute>t.minute)
        {
            return true;
        }
        else if(minute<t.minute)
        {
            return false;
        }
        else if(minute==t.minute)
        {
            if(second>t.second)
            {
                return true;
            }
            else if(second<t.second)
            {
                return false;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else 
    {
        return false;
    }
}

bool time1::operator <=(time1 t)
{
    if(hour>t.hour)
    {
        return false;
    }
    else if(hour<t.hour)
    {
        return true;
    }
    else if(hour==t.hour)
    {
        if(minute>t.minute)
        {
            return false;
        }
        else if(minute<t.minute)
        {
            return true;
        }
        else if(minute==t.minute)
        {
            if(second>t.second)
            {
                return false;
            }
            else if(second<t.second)
            {
                return true;
            }
            else if(second==t.second)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else 
    {
        return false;
    }   
}

bool time1::operator >=(time1 t)
{
    if(hour>t.hour)
    {
        return true;
    }
    else if(hour<t.hour)
    {
        return false;
    }
    else if(hour==t.hour)
    {
        if(minute>t.minute)
        {
            return true;
        }
        else if(minute<t.minute)
        {
            return false;
        }
        else if(minute==t.minute)
        {
            if(second>t.second)
            {
                return true;
            }
            else if(second<t.second)
            {
                return false;
            }
            else if(second==t.second)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else 
    {
        return false;
    }  
}
time1 time1::operator ++()
{
        second++;
        while(second>=60)
        {
            second-=60;
            minute++;

        }
         while(minute>=60)
        {
            minute-=60;
            hour++;
            if(hour==24)
            hour=0;
        }

    return *this;        
}


time1 time1::operator --()
{
        second--;
        if(second<0)
        {
            minute--;
            second+=60;
        }

        if(minute<0)
        {
            hour--;
            minute+=60;
        }
        if(hour<0)
        {
            hour=23;
        }

        return *this;
}


time1 time1::operator ++(int)
{
        time1 duplicate(*this);
        second++;
        while(second>=60)
        {
            second-=60;
            minute++;

        }
         while(minute>=60)
        {
            minute-=60;
            hour++;
            if(hour==24)
            hour=0;
        }
        return duplicate;
}


time1 time1::operator --(int)
{
    time1 duplicate(*this);
        second--;
        if(second<0)
        {
            minute--;
            second+=60;
        }

        if(minute<0)
        {
            hour--;
            minute+=60;
        }
        if(hour<0)
        {
            hour=23;
        }

        return duplicate;
}
int main()
{
    time1 t(0,59,59);
    time1 t2(10,0,56);
    time1 t3;

    t+60;
    t.showTime();
    t-60;
    t.showTime();
    t3=t;
    t3.showTime();
    t.showTime();
    cout<<(t2<t)<<"\n";
    cout<<(t2>t)<<"\n";
    cout<<(t2<=t)<<"\n";
    cout<<(t2>=t)<<"\n";
    (++t).showTime();
    (t++).showTime();
    t.showTime();
    (--t).showTime();
    (t--).showTime();
    t.showTime();
    
    getch();
}