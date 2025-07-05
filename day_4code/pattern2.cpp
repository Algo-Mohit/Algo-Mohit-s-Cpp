#include<iostream>
using namespace std;
int main()
{
    int i,n,j,num;
    cout<<"enter the value of n ";
    cin>>n;
    num =1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}