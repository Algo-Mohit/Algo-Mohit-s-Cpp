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
        cout<<"*";
        for(int j=1;j<n-1;j++)
        cout<<" ";
        cout<<"*"<<endl;
    }
    for(int j=0;j<n;j++)
    cout<<"*";
    return 0;
}