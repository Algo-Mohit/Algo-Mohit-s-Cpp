#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter a number ";
    cin>>n;
   int temp = n;

    while(n>2)
    {
        n = n/2;
    }

    if(temp == 1)
    {
        cout<<" Number is power of 2 ";
    }
    else if(n == 2)
    {
        cout<<"Number is power of 2";
    }
    else 
    {
        cout<<"Number is not power of 2";
    }
    return 0;
}