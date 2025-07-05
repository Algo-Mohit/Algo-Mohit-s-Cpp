#include<iostream>
using namespace std;
int main()
{
    int n , rev;
    cout<<"Enter a number : ";
    cin>>n;
    while(n>0)
    {
        rev = n % 10;
        n = n / 10;
        cout<<rev;
    }
    
    return 0;
}