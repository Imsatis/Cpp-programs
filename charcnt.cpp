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
     while(read)
     {  
       read.get(ch);
       cout<<ch;
       count++;

       }
     read.close();

     cout<<"\n count "<<count-1;


     getch();


     }


