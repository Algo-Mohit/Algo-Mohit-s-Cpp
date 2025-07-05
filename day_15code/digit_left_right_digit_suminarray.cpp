#include<iostream>
using namespace std;
void input(int roll_no[10])
{  
    cout<<" # Enter 10 roll number in array :- \n"<<endl;
    for(int i=0;i<10;i++)
    {    
        cout<<"Enter "<<i+1<<" roll number  in array : ";
         cin>>roll_no[i];
    }
}

int main()
{
    bool flag = true;
    int roll_no[10],num;
    input(roll_no);
    cout<<"Enter a number  : ";
    cin>>num;
    if(roll_no[0]==num)
    {
        flag=false;
        cout<<"Sum is : "<<roll_no[1];
    }
    else if(roll_no[9]==num)
    {
        flag = false;
        cout<<"Sum is : "<<roll_no[8];
    }
    else
    {
        for(int i=1;i<9;i++)
        {
            if(roll_no[i]==num)
            {
                flag = false;
                cout<<"Sum is : "<<roll_no[i-1] + roll_no[i+1];
                break;
            }
        }
    }
    if(flag)
    {
        cout<<"Number not found ";
    }
    return 0;
}