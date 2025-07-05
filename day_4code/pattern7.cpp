#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter the value of n ";
    cin>>n;
    char ch;
    for(i=0;i<n;i++)
    {
        ch = 'A';
        for(j=0;j<i+1;j++)
        {
            cout<<char(ch+j);
        }
        cout<<endl;
    }
}
