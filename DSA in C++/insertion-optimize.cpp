#include<iostream>
using namespace std;
int main()
{
    system("clear");
    int size,temp1,temp2,postion;
    cout<<"\nEnter the size of array : ";
    cin>>size;
    int arr[size+1];
    cout<<"\nEnter the "<<size<<" Element in the array : ";
    for(int i=0;i<size;i++) 
    {
        cin>>arr[i];
    }
    cout<<"\nArray without Insertion : ";
     for(int i=0;i<size;i++)
    {
       cout<<arr[i]<<" ";
    }

    //Insertion main logic begin 
    cout<<"\n\nEnter position where we insert number : ";
    cin>>postion;
    cout<<"\nEnter number which we insert in the array : ";
    cin>>temp2;
    for(int i=postion-1;i<size+1;i++)
    {
        temp1=arr[i];
        arr[i]=temp2;
        temp2=temp1;
    }
    cout<<"\nArray after insertion : ";
    for(int i=0 ;i<size+1;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}