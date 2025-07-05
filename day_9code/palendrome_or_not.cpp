#include<iostream>
using namespace std;
int main ()
{
    int n, rev = 0 ,num;
    cout<<" Enter the number to check it is palendrome or not : "<<endl;
    cin>>n;
int temp = n;
    while(n>0)
    {
        num = n % 10;
        n = n/10;
        rev = rev * 10 + num ;
    }
    if(temp == rev)
    {
        cout<<" Number is palendrome ";
    }
    else
    {
        cout<<" Number is not a palendrome number";
    }

    return 0;
}