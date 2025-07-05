//armstrong only 3 digit number

#include<iostream>
using namespace std;
int main()
{
int number;
cout<<"enter a number ";
cin>>number ;
int last_digit , first_digit;

if(number >= 100 && number <= 999)
{
  last_digit = number % 10 ;
  first_digit = number / 100 ;
  if(last_digit == first_digit)
  {
    cout<<"Number is armstrong ";
  }
  else
  {
    
    cout<<"Number is not a armstrong number ";
  }
}
else
{
    cout<<"INVALID INPUT"<<endl;
    cout<<"enter only 3 digit number ";
}

    return 0;
}