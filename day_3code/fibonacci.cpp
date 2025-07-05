#include<iostream>
using namespace std;
int main()
{
    int a,b,nextnum,i = 1,n;
    cout<<"enter number jaha tak series print karni ho ";
    cin>>n;
    cout<<"enter first number of fibonaaci series";
    cin>>a;
    cout<<"enter second number of fibonaaci series ";
    cin>>b;
    
    cout<<"fibonaaci series is : " <<a<<" "<<b;

    while(i<=n-2)
    {
        nextnum = a + b;
        cout<<" "<<nextnum;
   
        a=b;
        b=nextnum;
        i++;
    }
   return 0;
}
