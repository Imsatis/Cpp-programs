#include<iostream>
#include<fstream>

using namespace std;
 
     int main()
{ 
   int x,y;
   cin>>x>>y;
   ofstream file;

   file.open("frst.txt");

   file<<x<<y;

   file.close();



    }     
