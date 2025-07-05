#include<iostream>
#include<string.h>
using namespace std;
int main (){
    int rollno ,phy,chem,it, total ;
    float percentage;
   char name[30] , div[10];
    cout<<"enter the roll number :"<<endl;
    cin>>rollno;
    cout<<"enter the name of student :"<<endl;
    cin>>name;
    cout<<"enter the marks of physics, chemistry ,infomation tech :"<<endl;
    cin>>phy>>chem>>it;
    total = phy + chem + it ;
    percentage = total / 3.0;

    if(percentage >=60 )
     strcpy( div,"first");

     else if(percentage<60 && percentage >= 50)
     strcpy(div ,"second");

     else if (percentage < 50 && percentage >=36)
     strcpy(div,"third");

     else
     strcpy(div,"fail");


     cout<<"Roll no : "<<rollno<<endl;
     cout<<"Marks in physics : "<<phy<<endl;
     cout<<"Marks in chemistry : "<<chem<<endl;
     cout<<"Marks in information tech : "<<it<<endl;
     cout<<"Total marks : "<<total<<endl;
     cout<<"Percentage : "<<percentage<<endl;
     cout<<"Division : "<<div<<endl;


     return 0;


}