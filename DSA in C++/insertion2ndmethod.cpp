#include<iostream>
using namespace std;
int main()
{
    int size,position,number;
    cout<<"\nEnter size : ";
    cin>>size;
    int arr[size+1];
    cout<<" \nEnter the elements of array : ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nYour array is : ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n\nEnter position where we enter number : ";
    cin>>position;
    cout<<"\nEnter number which we insert : ";
    cin>>number;
    if(position != size+1)
    {
        for(int i=size-1;i>=position-1;i--)
        {
          arr[i+1] = arr[i] ;
        }
        arr[position-1] = number ;
    }
    else
    {
        arr[size] = number;
    }
    cout<<"\nArray after insertion is : ";
    for(int i=0;i<size+1;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}