#include<iostream>
using namespace std;
int main()
{
    int n,num,count = 0;
    cout<<" Enter a binary number : ";
    cin>>n;
    while(n>0)
    {
        num = n%10;
        if(num == 1)
        {
            count = count + 1;
        }
        n = n/10;
    }
    cout<<" number of 1's in binary digit is :  "<<count;
    return 0;
}