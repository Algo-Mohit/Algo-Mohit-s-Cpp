#include<iostream>
using namespace std;
int main()
{
    int n ,fact = 1;
    cout<<"Enter a number : ";
    cin>>n;
    while(n>=1)
    {
        fact = fact * n;
        n = n - 1;
    }
    cout<<" factorial of a number is : "<<fact<<"           ";
    
    return 0;
}