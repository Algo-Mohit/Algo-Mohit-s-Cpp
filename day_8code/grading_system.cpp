#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter your marks out of 100 ";
    cin>> marks;
    if (marks >= 90)
    {
        cout<<"A";
    }
    else if(marks >= 80)
    {
        cout<<"B";
    }
    else if (marks >= 70)
    {
        cout<<"C";
    }
    else if(marks >= 60)
    {
        cout<<"D";
    }
    else
    {
        cout<<"FAIL !";
    }
    
    return 0 ;
}