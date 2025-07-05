#include<iostream>
#include<string>
using namespace std;
struct student
{
  int roll;
  string name;
  float per;
 string grade;
}s;

int main()
{
    student s[5];
    for(int i=0;i<5;i++)
    {
        cout<<"1. Enter roll no.\n2. Name.\n3. Percentage\n4. Grade\n";
        cin>>s[i].roll;
        cin.ignore();
        getline(cin,s[i].name);
        cin>>s[i].per;
        cin.ignore();
        getline(cin,s[i].grade);
    }
    for(int i=0;i<5;i++)
    {
        cout<<"\n\n\n";
        cout<<"Student "<<i+1<<endl;
        cout<<"Roll no : "<<s[i].roll<<endl;
        cout<<"Name : "<<s[i].name<<endl;
        cout<<"Percentage : "<<s[i].per<<endl;
        cout<<"Grade : "<<s[i].grade<<endl;
    }
    return 0;
}