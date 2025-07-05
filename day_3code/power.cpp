#include<iostream>
using namespace std;
int main()
{
    int base,power,i=1,result = 1;
    cout<<"enter base";
    cin>>base;
    cout<<"enter power";
    cin>>power;
    while(i<=power)
    {
      result = base * result;
      i++;

    }
    cout<<result;
    return 0;
}