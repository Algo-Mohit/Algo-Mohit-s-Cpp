#include<iostream>
using namespace std;
struct complex 
{
    int real;
    int img;
};
void input(complex &);
void output(complex );
complex sum(complex,complex);
int main()
{
    complex c1,c2,c3;
    input(c1);
    input(c2);
    c3 = sum(c1,c2);
    output(c3);

    return 0;
}

void input(complex &t)
{
    cout<<"\nEnter real : ";
    cin>>t.real;
    cout<<"\nEnter img : ";
    cin>>t.img;
}
void output(complex o)
{
    cout<<"\nsum of real is : ";
    cout<<o.real;
    cout<<"\n\nsum of img is : ";
    cout<<o.img;
}
complex sum(complex p1 , complex p2)
{
    complex p3;
    p3.real = p1.real + p2.real ;
    p3.img = p1.img + p2.img ;
    return p3;
}