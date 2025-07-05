#include<iostream>
using namespace std;
int main()
{
    int n,div,temp , num;
    cout<<"Enter a number ";
    cin>>n;
    while(n>0)
    {
     num = n % 10;
     n = n/10;
     if(num % 3 == 0)
     {
      cout<<num<<endl ;
     }   
    }
    return 0;
}