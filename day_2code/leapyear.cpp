#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter the year";
    cin>>year;
    if(year%4==0)
    cout << "year "<< year<<" is leap year ";
    else
    cout<<"year "<<year<<" is not a leap year";
    return 0;
}