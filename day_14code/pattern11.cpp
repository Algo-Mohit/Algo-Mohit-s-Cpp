#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    for(int i=0;i<n;i++)
    {

        //star
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }

        //space
        int k =1;
        int j = 1;
       while(j<n)
       {
        k = k+2;
        j++;
       }
       for(int l=0;l<k-2-2*i;l++)
       {
        cout<<" ";
       }

       //right triangle
       if (i<=n-2)
       {
       for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
    }
    else
    {
        for(int j=0;j<=i-1;j++)
        {
            cout<<"*";
        }
    }
        cout<<endl;
    }
    return 0;
}