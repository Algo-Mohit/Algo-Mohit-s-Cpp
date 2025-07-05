#include<iostream>
using namespace std;

float fun(float sal)
{
    float new_sal ;
    new_sal = sal + sal * 0.15 ;
    return new_sal;
}
int main()
{
    float net_sal;
    float salary;
    cout<<"enter your salary : ";
    cin>>salary;
    net_sal = fun(salary);
    cout<<"your net salary is : ";
    cout<<net_sal;
    return 0;
}