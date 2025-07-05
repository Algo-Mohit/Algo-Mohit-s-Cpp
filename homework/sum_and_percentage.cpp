#include<iostream>
using namespace std;

float fun1(float m1,float m2,float m3)
{
    float totalmarks;
    totalmarks = m1 + m2 + m3 ;
    return totalmarks;
}

float fun2(float sum_marks)
{
    float percentage;
    percentage = sum_marks / 3 ;
    return percentage ;
}

int main()
{
  float s1,s2,s3;
  float sum;
  cout<<"enter subject marks : ";
  cin>>s1>>s2>>s3;
  sum = fun1(s1,s2,s3);
  cout<<"sum of marks :";
  cout<<sum <<endl ;

  float per;
  per = fun2(sum);
  cout<<"percentage is :";
  cout<<per;

  return 0;
}
