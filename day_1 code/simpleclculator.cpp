#include<iostream>
using namespace std;
int a,b;

int sum()
{ 
    return a+b;
}
int sub()
{
    return a-b;
}
int mul()
{
   return a*b;
}
int div()
{
    return a/b;
}
int main()
{
    cout<<"enter the value of a and b : "<<endl;
    cin>>a>>b;
    cout<< "sum is : "<<sum() <<endl;
    cout<< "sub is : "<<sub() <<endl;
    cout<< "mul is : "<<mul() <<endl;
    cout<< "div is : "<<div() <<endl;
    return 0;
}