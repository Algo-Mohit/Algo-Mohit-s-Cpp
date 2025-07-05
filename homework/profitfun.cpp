#include<iostream>
using namespace std;
float profitfun( float pur)
{
    float pro;
     pro = pur * 0.1 ;
     return pro;    
}

int main()
{
    float purchase ;
    float profit;
    cout<<"enter purchase price : ";
    cin>>purchase;
   
    profit = profitfun(purchase);
    cout<<"your profit is :";
    cout<<profit;
    return 0;
}
