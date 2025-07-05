#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
        while(n>1)
        n=n-2;

        if(n==0)
        cout<<"number is even";
        else
        cout<<"number is odd";
    
    return 0;
}