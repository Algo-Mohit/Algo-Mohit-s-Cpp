#include<iostream>
using namespace std;
 float amount = 3000;
int main()
{
    int n;
    cout<<"choose your option"<<endl;
    cout<<" 1.Check Statement\n 2.Deposite\n 3.Withdrawl\n 4.Exist"<<endl;
    cin>>n;
    float deposit , withdrawl ;
    switch(n)
    {
        case 1 :
                cout<<" Your statement is : "<<amount<<endl;
                 main();
        case 2 : cout<<" deposite window "<<endl;
                 cout<<"Enter deposite amount "<<endl;
                 cin>>deposit;
                 amount = amount + deposit;
                 cout<<" Total amount is :"<<amount<<endl;
                 main();
        case 3 : cout<<" Enter withdrawl amount "<<endl;
                 cin>>withdrawl;
                 if(amount >= withdrawl)
                 {
                    amount = amount - withdrawl ;
                    cout<<" remaining amount is : "<<amount<<endl;
                 }         
                 else
                 {
                    cout<<"insuffecient balance"<<endl;
                 }
                 main();
        case 4 :cout<<"VISIT AGAIN !"; 
                break;         
        
                 
    }
    return 0;
}