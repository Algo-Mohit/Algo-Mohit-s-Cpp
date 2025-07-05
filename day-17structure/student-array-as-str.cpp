#include<iostream>
#include<string>
using namespace std;

struct student
{
    int roll;
    int marks[3];
    float per;
    string grade;  
};

int main()
{
    student s[5];

    for(int i = 0; i < 5; i++)
    {
        int total = 0;
        cout << "Enter roll no. : ";
        cin >> s[i].roll;

        cout << "Enter marks of 3 subjects: ";
        for(int j = 0; j < 3; j++)
        {
            cin >> s[i].marks[j];
            total += s[i].marks[j];
        }

        s[i].per = total / 3;

        if(s[i].per >= 90)
            s[i].grade = "A";
        else if(s[i].per >= 80)
            s[i].grade = "B";
        else if(s[i].per >= 70)
            s[i].grade = "C";
        else if(s[i].per >= 60)
            s[i].grade = "D";
        else
            s[i].grade = "FAIL";
    }

    for(int i = 0; i < 5; i++)
    {
        cout << "\n\nStudent " << i + 1 << endl;
        cout << "Roll no: " << s[i].roll << endl;
        cout << "Percentage: " << s[i].per << " %" << endl;
        cout << "Grade: " << s[i].grade << endl;
    }

    return 0;
}
