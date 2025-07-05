#include<iostream>
using namespace std;
int main()
{
    int num , sum = 0;
    cout<<"enter a number "<<endl;
    cin>>num;
    while(num>=1)
    {
        sum = sum + num ;
        num = num -1 ;
    }
    cout<<"Sum of first n natural number is : "<<sum<<" ";
    return 0;
}