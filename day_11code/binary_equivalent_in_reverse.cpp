#include<iostream>
using namespace std;
int main()
{
    int n,rem;
    cout<<"Enter the number";
    cin>>n;
    while(n>=1)
    { 
      rem = n % 2;
      n = n/2;
      cout<<rem<<" ";  
    }
    return 0;
}