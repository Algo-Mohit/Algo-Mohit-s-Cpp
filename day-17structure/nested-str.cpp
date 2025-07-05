#include<iostream>
#include<string>
using namespace std;
struct emp
{
    int emp_no ;
    string name ;
    int basic ;
    struct perks
    {
        float da;
        float ta;
        float hra;
    }p;
    float net_sal ;
}e;

int main()
{
    cout<<"Enter employee number : ";
    cin>>e.emp_no;
    cout<<"Enter employee name : ";
    cin.ignore();
    getline(cin,e.name);
    cout<<"Enter basic : ";
    cin>>e.basic;
    e.p.da=e.basic * 0.1 ;
    e.p.ta=e.basic * 0.2;
    e.p.hra=e.basic * 0.3;
    e.net_sal=e.p.da + e.p.ta + e.p.hra + e.basic ;
    cout<<"your employee number is : "<<e.emp_no<<endl;
    cout<<"your DA is : "<<e.p.da<<endl;
    cout<<" your TA is : "<<e.p.ta<<endl;
    cout<<" your HRA IS : "<<e.p.hra<<endl;
    cout<<" yout net salary is : "<<e.net_sal;
    return 0;
}