#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the value of n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
