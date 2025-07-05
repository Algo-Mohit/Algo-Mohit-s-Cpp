/*question conditions 
  units price
  0-200 : 0.5         ->panalty : 0
  201-300 : 0.75      ->panalty : 100
  301-400 : 0.9       ->panalty : 200
  401-500 : 1         ->panalty : 300
  501 and above : 2   ->panalty : 400

  solve it using functions ?
*/

#include<iostream>
using namespace std;
float bill(float units)
{
  if(units<=200)
  {
    return (units * 0.5 ) ;
  }
  else if(units<=300)
  {
    return ((200 * 0.5) + 100 + (units - 200)* 0.75);
  }
  else if(units <= 400)
  {
    return ((200 * 0.5)+ 100 + (100 * 0.75)+ 200 + (units - 300) * 0.9);
  }
  else if(units <= 500)
  {
    return ((200 * 0.5 )+ 100 + (100 * 0.75)+ 200 + (100 *0.9)+ 300 + (units -400) * 1);
  }
  else
  {
    return ((200 * 0.5 )+ 100 + (100 * 0.75)+ 200 + (100 *0.9)+ 300 + (100 * 1)+ 400 + (units -500) * 2);
  }
  }


int main()
{ 
    float unit;
    cout<<" Enter bill units" ;
    cin>>unit;
    float price;
    price = bill(unit);
    cout<<"Total amount is : "<<price;
    return 0;
}

