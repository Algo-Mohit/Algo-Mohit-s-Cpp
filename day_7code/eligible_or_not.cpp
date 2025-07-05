#include<iostream>
using namespace std;
int main()
{
    float maths,phy,chem,total;
    cout<<"Enter marks in maths : ";
    cin>>maths;
    cout<<"Enter marks in physics : ";
    cin>>phy;
    cout<<"Enter marks in chemistry : ";
    cin>>chem;

    total = maths + phy + chem ;
    if((maths >= 60 && phy >= 50 && chem >= 40)  && (total >= 200 || (maths + phy) >= 150)  )
    {
        
        
            cout<<"Eligible for admission ";
        
        
    }
    else
    {
        cout<<"Marks in subject is less than our eligibility criteria "<<endl;
        cout<<"NOT ELIGIBLE";
    }
    return 0;
}