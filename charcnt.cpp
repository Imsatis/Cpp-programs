#include<iostream>
#include<conio.h>
#include<fstream>
#include<process.h>
#include<dos.h>
using namespace std;

    int main()
{
     ifstream read;
     read.open("hello.txt");
     char ch;
     int count=0;
     while(read.get(ch))
     { cout<<ch; 
       read.get(ch);
       cout<<ch;
       count++;
       getch();
       //cout<<read;

       }
     read.close();

     cout<<"\n count "<<count<<"\n"<<read;


     getch();


     }


