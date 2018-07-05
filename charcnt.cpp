#include<iostream>
#include<conio.h>
#include<fstream>

// Character count use always space before saving the txt file

using namespace std;

    int main()
{
     ifstream read;
     read.open("hello.txt");
     char ch;
     int count=0;
     while(read)         //object return zero when character ends
     {  
       read.get(ch);     //character reading function  
       cout<<ch;      
       count++;

       }
     read.close();

     cout<<"\n count "<<count-1;


     getch();


     }


