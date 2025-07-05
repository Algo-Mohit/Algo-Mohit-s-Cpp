#include<iostream>
using namespace std;
int main()
{
    int a,b ;
    cout<<"Enter the value of a and b ";
    cin>>a>>b;
    while(a!=b)
    {
        if(a>b)
        {
            a = a - b;
        }
        else if(b>a)
        {
            b = b-a ;
        }
    }    
   
     cout<<"gcd of a and b is : "<<a;
        

    return 0;
}