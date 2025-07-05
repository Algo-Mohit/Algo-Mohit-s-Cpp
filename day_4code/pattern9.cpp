#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    int num = 1;
    cout<<"enter the value of n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            cout<<num;
            num++;
        }
        cout<<endl;
    }
}


