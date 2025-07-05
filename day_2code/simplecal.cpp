#include<iostream>
using namespace std;
int main()
{
    int num1 ,num2 ;
    char op;
    cout<<"enter number 1 :";
    cin>>num1;
    cout<<"enter number 2 :";
    cin>>num2;
    cout<<"enter operator";
    cin>>op;

   switch (op)
   {
    case '+':
    cout<<num1 + num2 ;
    break;

    case '-':
    cout<<num1 - num2 ;
    break;

    case '*':
    cout<<num1 * num2 ;
    break;

    case '/':
    cout<<num1 / num2 ;
    break;

    default :
    cout<<"invalid operator";
    break;
   }

   return 0;
}