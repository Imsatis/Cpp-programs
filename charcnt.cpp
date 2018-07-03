#include<iostream>
#include<conio.h>
#include<fstream>
#include<process.h>
#include<dos.h>
using namespace std;

    int main()
{
     ifstream read;
     read.open("characters.txt");
     char ch;
     int count=0,x,y;
     while(read.get(ch))
     {
       //read.get(ch);
       cout<<ch;
       count++;
       //x=ch;
       //cout<<"\n x"<<x;
      
       }
     read.close();
     cout<<"\n count "<<count;
    // exit(1);
     getch();


     }    
    

