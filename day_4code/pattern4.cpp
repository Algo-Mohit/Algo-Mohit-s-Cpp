#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter the value of n ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }
}