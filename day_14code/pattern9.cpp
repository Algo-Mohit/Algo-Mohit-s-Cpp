#include<iostream>
using namespace std;
int main()
{
    int i,j,n,v ;
    cout<<"Enter the value of n";
    cin>>n;
    v=(n/2)+1;
    for(i=1 ; i<=v; i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int k=1;k<=v-1;k++)
    {
        for(int l=1;l<=v-k;l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}