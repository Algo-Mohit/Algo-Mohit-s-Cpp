#include<iostream>
using namespace std;

int odd_even(int n)
{
    if (n%2==0)
    cout<<"even number"<<endl;
    else
    cout<<"odd number"<<endl;
    return 0;
}
 int div_by_5(int n)
 {
    if(n%5==0)
    cout<<"number is divisible by 5";
    else
    cout<<"number is not divisible by 5 ";
    return 0;
 }

int main()
{   
    int n;
    cout<<"enter the number ";
    cin>>n;
    odd_even(n);
    div_by_5(n);

return 0;
}