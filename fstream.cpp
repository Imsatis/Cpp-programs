#include<iostream>
#include<fstream>

using namespace std;


  class my
{
   int x,y,a,b;
   
   public:
    void output()
 {   
   cin>>x>>y;
   ofstream file;

   file.open("frst.txt");

   file<<x<<"\n"<<y;

   file.close();
                 }

     void input()		 
 {  
   ifstream data;

   data.open("frst.txt");

   data>>a>>b;
   cout<<"a "<<a<<"\nb "<<b<<"\nx "<<x<<"\ny "<<y;
   data.close();
       }
  
    };  

     int main()
{ 
  my ob1;
  ob1.output();
  ob1.input();
    }     
