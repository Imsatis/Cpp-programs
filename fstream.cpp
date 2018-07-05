#include<iostream>
#include<fstream>

                   //creating and reading from a txt file;

using namespace std;


  class my
{
   int x,y,a,b;
   
   public:
    
     my()
   { 
 
   ifstream data;                 // ud default constructor;

   data.open("frst.txt");

   data>>a>>b;
 

      }  
   
   void output()
 {   
   cin>>x>>y;
   ofstream file;

   file.open("frst.txt");           //taking value from user;

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
     cout<<"\na "<<a<<"\nb "<<b;
      } 
    };  

     int main()
{ 
  my ob1;         //constructor working value assigning;
  ob1.show();     //showing the ud default constructor assigned values 
  ob1.output();   //new value taking from user and saving in txt file
  ob1.input();    //value assigning from existing txt file
    }     
