#include<iostream>
#include<conio.h>
#include<fstream>
#include<process.h>
#include<dos.h>
using namespace std;

    int main()
{
     ifstream read;
     cout<<"init "<<read;
     read.open("characters.txt");
     char ch;
     int count=0;
     cout<<read;
     while(read)
     {
       read.get(ch);
       cout<<ch;
       count++;
       cout<<"\nread "<<read;
       getch();
      
       }
     read.close();
     cout<<"\n count "<<count;

     getch();


     }    
    

