#include<iostream>
using namespace std;
int main()
{
    int count=0 ,n;
    cout<<"enter the number ";
    cin>>n;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    cout <<"digit in this number is : "<<count;
    return 0;
}