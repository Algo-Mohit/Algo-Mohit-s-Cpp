#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size ";
    cin>>size;
    int arr[size];
    cout<<"Enter tour binary number ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"your array after compliment is ";
    for(int i=0;i<size;i++)
    {
        arr[i]=1-arr[i];
        cout<<arr[i];
    }
    return 0;
}