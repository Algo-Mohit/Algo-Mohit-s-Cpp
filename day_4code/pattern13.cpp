#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the value of n";
    cin>>n;
    int num;
    for(i=0;i<n;i++)
    {
        num = 1;
    for(j=0;j<n-i-1;j++)
    {
        cout<<" ";
    }

    for(j=0;j<i+1;j++)
    {
        cout<<num;
        num++;
    }
    
    for(j=i;j>0;j--)
    {
        cout<<j;
       
    }
    cout<<endl;
}
}