#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    
    cout<<"enter the value of n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        char ch = 'A'+i;
        for(j=0;j<i+1;j++)
        {
            cout<<ch;
            ch--;
        }
        cout<<endl;
    }
}