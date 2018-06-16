#include<iostream>
#include<math.h>
using namespace std;


int  main()
{
 int a,b=0,c;
 float x,y;
 cout<<"Enter The Value a b and c";cin>>a;cin>>b;cin>>c;
 
 x=(-b+sqrt(pow(b,2)-4*a*c))/2*a;

 y=(-b-sqrt(pow(b,2)-4*a*c))/2*a;


 cout<<"\nPositive =  "<<x<<"\nNegative = "<<y;

}  
