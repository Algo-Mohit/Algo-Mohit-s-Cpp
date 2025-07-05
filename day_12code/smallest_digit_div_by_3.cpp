#include<iostream>
using namespace std;
int main()
{
    int smallest = 10 , n ,digit;
    cout<<"Enter a number ";
    cin>>n;
    while(n>0)
    {
     digit = n % 10 ;   
     if(digit % 3 == 0)
     {
        if(digit < smallest)
        {
            smallest = digit ;
        }
     }
     n = n / 10;
    }

    if(smallest == 10)
    {
        cout<<"All digits in a number is not divisible by 3 ";
    }
    else
    {
        cout<<"Smallest number in a digit that is diviible by 3 is : "<<smallest;
    }
    return 0;
}