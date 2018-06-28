#include<iostream>
#include<fstream>

using namespace std;
 
     int main()
{ 
   
   ofstream file;

   file.open("frst.txt");

   file<<"This is my first file";

   file.close();



    }     
