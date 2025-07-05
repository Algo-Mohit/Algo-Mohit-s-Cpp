#include<iostream>
using namespace std;
int main()
{
    bool flag = true;
    int roll[10],num;
    cout<<" # Enter 10 number in a array # \nX"<<endl;
    for(int i=0;i<10;i++)
    {
     cout<<"Enter "<<i+1<<" number in array : ";
     cin>>roll[i];   
    }
    cout<<"Enter a number which we want to search : ";
    cin>>num;
    for(int i=0;i<10;i++)
    {
        if(roll[i]==num)
        {
            flag = false;
            cout<<"your number position in a array is : "<<i+1;
            break;
        }
    }
    if(flag)
    {
        cout<<"Number not found in a array\nEnter correct number ! ";
    }
    return 0;
}