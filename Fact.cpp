#include<iostream>

int fact(int);
using namespace std;

  int main()
{
  int v;

  cout<<"Enter NO.";cin>>v;

  cout<<v;
  v=fact(v);

  cout<<"="<<v;
 }  

 int fact(int v)
{
  int o;
  for(o=v-1;o>=1;o=o-1)
       {
         cout<<"*"<<o;
	 v=o*v;

             }
  return v; 	     

   }   
