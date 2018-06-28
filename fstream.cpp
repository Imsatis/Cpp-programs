#include<iostream>
#include<fstream>

using namespace std;
 
     int main()
{ 
   int x,y,a,b;
   cin>>x>>y;
   ofstream file;

   file.open("frst.txt");

   file<<x<<"\n"<<y;

   file.close();

   ifstream data;

   data.open("frst.txt");

   data>>a>>b;
   cout<<"a "<<a<<"\nb "<<b<<"\nx "<<x<<"\ny "<<y;
   data.close();

    }     
