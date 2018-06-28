#include<iostream>
#include<fstream>

using namespace std;


  class my
{
   int x,y,a,b;
   
   public:
    
     my()
   { 
 
   ifstream data;

   data.open("frst.txt");

   data>>a>>b;
 

      }  
   
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
          
    void show()
   { 
     cout<<"\nx "<<x<<"\ny "<<y<<"\na "<<a<<"\nb "<<b;
      } 
    };  

     int main()
{ 
  my ob1;
  ob1.show();
  ob1.output();
  ob1.input();
    }     
