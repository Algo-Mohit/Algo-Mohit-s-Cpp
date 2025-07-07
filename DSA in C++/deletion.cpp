#include<iostream>
using namespace std;
int main()
{
    int size,temp1,postion;
    cout<<"\nEnter the size of array : ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter the "<<size<<" Element in the array : ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nArray without deletion : ";
     for(int i=0;i<size;i++)
    {
       cout<<arr[i]<<" ";
    }

    //Deletion main logic begin 
    cout<<"\n\nEnter position where we delete number : ";
    cin>>postion;
    for(int i=postion-1;i<size;i++)
    {
       arr[i]=arr[i+1];

    }
    cout<<"\nArray after deletion : ";
    for(int i=0 ;i<size-1;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;

}   