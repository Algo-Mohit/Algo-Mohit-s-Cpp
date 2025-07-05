#include<iostream>
using namespace std;
int main()
{
    int n,k = 2 ,count = 0 ;
    cout<<"Enter a number ";
    cin>>n;
    int temp = n;
    
        while(k<=n)
      {
        if(n%k==0)
        {
          count++;
        }
        k++;
      
      } 
      if(count == 1)
      {
        cout<<"Number is prime";
      }
      else
      {
        cout<<"Number is not prime";
      }
    
    return 0;
}