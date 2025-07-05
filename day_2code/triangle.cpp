#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the side of triangle ";
    cin>>a>>b>>c;

    if(a==b && b==c)
    cout<<"triangle is equilateral";
    else if(a==b || b==c || a==c)
    cout<<"triangle is isoscales";
    else 
    cout<<"triangle is scalne";
   
    return 0;
}