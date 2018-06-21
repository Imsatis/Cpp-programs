#include<iostream>

void swap(int &,int &);

using namespace std;
  int main()
{
  int a,b,r;
  cout<<"Enter The no = ";cin>>a;
  cout<<"Enter The no = ";cin>>b;
 
  swap(a,b);
            
  cout<<"\na is = "<<a;
  cout<<"\nb is = "<<b;

} 

   void swap(int &a,int &b)
  { 
   a=a+b;
   b=a-b;
   a=a-b;
   
     }
