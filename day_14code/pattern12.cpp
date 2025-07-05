#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int j=0;j<n;j++)
    cout<<"*";
    cout<<endl; 
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<n-i;j++)
        cout<<" ";
        cout<<"*"<<endl;
    }
    for(int j=0;j<n;j++)
    cout<<"*";
    return 0;
}