#include<iostream>
using namespace std;
int sum_of_digit(int num )
{   int last ,sum = 0 ;
    while(num>0)
    {
       last = num % 10 ;
       sum = sum + last ;
       num = num / 10 ;      
    }
    return sum;
}
int main()
{
    int num , sum1  ;
    cout<<"Enter a number ";
    cin>>num;
    sum1 = sum_of_digit(num);
    while(sum1 > 9)
    {
      sum1 = sum_of_digit(sum1);
    }
    cout<<"sum of digit unitl it becomes single digit is : "<<sum1 ;

    return 0;
}