#include<iostream>
#include<string>

using namespace std;

class student
{
    int roll, age, marks[3];
    string name;
public:

    student()
    {
        for (int i = 0; i < 3; i++)
        {
            marks[i] = 33;
        }
    }

    void input();
    void display();
    friend void editMarks(student s[], int n, int r);

};

void student::input()
{
    cout << "Enter the roll no. of the student\n";
    cin >> roll;
    cout << "Enter the name of the student\n";
    cin >> name;
    cout << "Enter the age of the student\n";
    cin >> age;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the marks of subject " << i + 1 << " \n";
        cin >> marks[i];
    }
}


void student::display()
{

    cout << "The roll no. of the student is " << roll << "\n";
    cout << "The name of the student is " << name << "\n";
    cout << "The age of the student is " << age << "\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "The marks of subject " << i + 1 << "is :" << marks[i] << "\n";
    }
    cout << "-------------------------------------\n";

}



void editMarks(student s[], int n, int r)
{
    for(int i = 0; i < n; i++)
    {
        if (s[i].roll == r)
        {
            cout << "Enter the marks of subject 1\n";
            cin >> s[i].marks[0];
            cout << "Enter the marks of subject 2\n";
            cin >> s[i].marks[1];
            cout << "Enter the marks of subject 3\n";
            cin >> s[i].marks[2];

            cout << "Marks Edited Successfully\n";
            s[i].display();
            break;
        }
        else
        {
            cout << "Sorry no Roll no. found\n";
        }
    }
}

int main()
{
    int i, n, roll;
    string str;
    student s[10];
    cout << "Enter the no. of students you want?\n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        s[i].input();
    }

    for (i = 0; i < n; i++)
    {
        s[i].display();
    }

    cout << "Do you want to edit marks of any student?[y/n]\n";
    cin >> str;
        if (str == "y" || str == "Y")
        {
            cout << "Enter the Roll no. of studentwhose marks you want to edit.\n";
            cin >> roll;

            editMarks(s, n, roll);

            cout << "Records after editing marks\n\n\n";
            for (i = 0; i < n; i++)
            {
                s[i].display();
            }
        }
        else
            exit(1);




}
