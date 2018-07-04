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
     char ch,c;
     int count=0;
     while(read.get(c))
     { cout<<"\nc "<<c<<"  "<<ch; 
       read.get(ch);
       cout<<"\nch "<<(int)ch;
       count++;
       getch();
       //cout<<read;

       }
     read.close();

     cout<<"\n count "<<count<<"\n"<<read;


     getch();


     }


