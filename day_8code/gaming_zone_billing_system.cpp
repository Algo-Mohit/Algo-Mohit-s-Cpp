#include<iostream>
using namespace std;
float only_bill(float time ,int sp_day_code)
{
    float bill_total;
    if((sp_day_code == 1)&& (time > 2))
    {
        return ((0.75 * 60) * 2 +(time - 2) * 60);
    }
    else if ((sp_day_code == 1) && (time <= 2))
    {
        return ((0.75 * 60) * time);
    }
    else
    {
        return (time * 0.5 * 60);
    }
}

float gender_discount(float price1 , int gen_code)
{
    if(gen_code == 1)
    {
        return (price1 - (price1 * 0.1));
    }
    else
    {
        return price1 ;
    }
}

int main()
{
    float time , age ,price ;
    int sp_day ,gender_code ;
    cout<<" Enter age : ";
    cin>>age;
    
if(age >= 0 && age <=30)
{   
    cout<<" Enter time (in hour) : ";
    cin>>time;
    cout<<" Enter gender code :- "<<endl ;
    cout<<" > female : 1 "<<endl;
    cout<<" > male : 0 "<<endl;
    cin>>gender_code;
    cout<<"Enter special day code :-"<<endl;
    cout<<" > special day code : 1 "<<endl;
    cout<<" > normal day code : 0 "<<endl;
    cin>>sp_day;
    if(age >= 0 && age <=18)
    {
        price = 50 + only_bill(time , sp_day);
        price = gender_discount(price ,gender_code);
        cout<<"Your total bill is : "<<price <<endl;
        cout<<" VISIT AGAIN ! ";
    }
    if(age >= 19 && age <=30)
    {
        price = 300 + only_bill(time , sp_day);
        price = gender_discount(price ,gender_code);
        cout<<"Your total bill is : "<<price <<endl;
        cout<<" VISIT AGAIN ! ";
    }
}
else
{
    cout<<" NOT ALLOWED !";
}
return 0;
}