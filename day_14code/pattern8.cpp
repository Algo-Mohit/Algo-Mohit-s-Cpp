//pascal triangle

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    for(int i =1 ; i<=n ; i++)
    {
        //space triangle
        for(int j=1; j<=n-i;j++)
        {
            cout<<" ";
        }

        
         //left triangle 
        for(int k =1;k<=i;k++)
        {
            cout<<k;
        }


        //right triangle
        for(int l=i-1 ;l>0;l-- )
        {
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}