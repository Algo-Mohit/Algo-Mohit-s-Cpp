#include<iostream>
#include<string>
using namespace std;

struct student
{
    int roll;
    string name;
};

void infun(student &);  
void outfun(student);

int main()
{
    student s;
    infun(s);
    outfun(s);

    return 0;
}

void infun(student &t)
{
    cout << "Enter roll no: ";
    cin >> t.roll;
    cin.ignore();  
    
    cout << "Enter name: ";
    getline(cin, t.name);
}

void outfun(student w)
{
    cout << "\nRoll no: " << w.roll << endl;
    cout << "Name   : " << w.name << endl;
}
