#include<iostream>
using namespace std;
int main()
{
    int n ,sum = 0;
    bool flag = true ;
    cout<<"enter a number";
    cin>>n;
    for(;n>0;n = n/10)
    {
    if(flag == true)
    {
    sum = sum + n%10 ;
    flag = false ;
    
    }
    else
    {
        flag = true ;
    }
}
cout<<"sum of a alternate digit is : "<<sum;

    return 0;
}