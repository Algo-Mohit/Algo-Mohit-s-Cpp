#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number ";
    cin>>num;
    if(num<0)
    cout<<"number is negative";

    else if(num>0)
    cout<<"number is positive";

    else
    cout<<"number is zero";
    return 0;
}