// n=5 
//   1
//  121
// 12321
//  121
//   1

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a only odd number";
    cin>>n;
    int n2 = n/2 + 1;
    for(int i =0;i<n2;i++)
    {
        for(int j=0;j<n2-1-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<i+1;j++)
        {
            cout<<j+1;
        }
        int m=i;
        for(int j=0;j<i;j++)
        {
            cout<<m--;
        }
        cout<<endl;
    }
    int n3=n/2;
    for(int i=0;i<n3;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<n3-i;j++)
        {
            cout<<j+1;
        }
        for(int j=0;j<n3-i-1;j++)
        {
            cout<<n3-1-j;
        }
        cout<<endl;
    }
    return 0;
}