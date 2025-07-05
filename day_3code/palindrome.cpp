#include<iostream>
using namespace std;
int main()
{
    int digit,rev = 0,num;
    cout<<"enter a number";
    cin>>num;
    int temp = num;
    while (num>0)
    {
        digit = num % 10;
        rev = rev * 10 + digit ;
        num = num / 10;
    }

    if( temp == rev )
   cout<<"number is palindrome";
   else
   cout<<" number is not palindrome number";
   return 0;
    
}