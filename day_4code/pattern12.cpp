#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the value of n ";
    cin>>n;
    char ch  ='A';
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }

        for(j=0;j<n-i;j++)
        {
            cout<<char(ch+i);
        }
          cout<<endl;
    }
  
}