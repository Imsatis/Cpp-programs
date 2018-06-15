#include<iostream>
using namespace std;

int si(int p,float r,int t);

int st(int amt,float per);

int aoc(float rd);

int main()
{
   int p,t;
   float r;

   cout<<"Enter The Principle = ";
   cin>>p;
   cout<<"Entered =  "<<p;
   
   cout<<"\nEnter The Rate = ";
   cin>>r;
   cout<<"Entered = "<<r;

   cout<<"\nEnter The Year = ";
   cin>>t;
   cout<<"Entered = "<<t;

     si(p,r,t);
   
   int amt;
   float per;

   cout<<"\n\nSales Tax Calculator\nEnter Amount = ";
   cin>>amt;
   cout<<"Entered is = "<<amt;

   cout<<"\nEnter Percent = ";
   cin>>per;
  
   st(amt,per);
   
   float rd;
   cout<<"\n\nArea of Circle Calculator\nEnter The Radius = ";
   cin>>rd;

    aoc(rd);
    
}


  int si(int p,float r,int t)
  {
     float res,amt;

     res=p*r*t/100;
     amt=res+p;
     cout<<"\nSimple Intrest is = "<<res;
     cout<<"\nTotal Amount is = "<<amt;  
  }

  int st(int amt,float per)
  {
    float tax;
    tax=(amt*per)/100+amt;
    cout<<"Including Tax = "<<tax;

  }

  int aoc(float rd)
 {
 float pi=3.14,res;
 res=pi*rd*rd;
 cout<<"Answer is = "<<res;
 
 } 
