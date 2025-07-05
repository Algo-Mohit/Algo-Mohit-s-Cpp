#include<iostream>
using namespace std;
int steps(int n )
{
    int step = 0 ;
    while(n>0)
    {
      if(n % 2 == 0)
      {
        n = n / 2 ;
        step++;
      }
      else
      {
        n = n - 1;
        step++;
      }
    }
    return step ;
}
int main()
{ 
    int num , ret;
    cout<<"Enter the value of n ";
    cin>>num;
   ret = steps(num);
   cout<<"Number of step needed to reduce this number into n : "<<ret-1;
    return 0 ;
}