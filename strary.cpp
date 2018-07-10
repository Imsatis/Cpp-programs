#include <iostream>
#include <conio.h>
#include<string>


using namespace std;


                         //incomplete checking string array 

     class str {

public:

      string *ptr[];
      int count;
      string a,b,c,d,e,f,g,h;

      //string st1,st,ary[10];

      for (int i=0;i<15;i++)

       

      void show() {

      //string *ptr[2]={&st1,&st};

      ifstream read_count;
      read_count.open("chi.md");      //udd constructor for reading count value;
      read_count>>count;

      ifstream read_item;
      read_item.open("chidata.md");      //udd constructor for reading items;    
    


       

        for(int i=0;i<2;i++) {

          cout<<*ptr[i];

      		
      	}
      } 	

     };

     int main() {

      str ob;
      ob.st1="hellow";
      ob.st="world";
      
      ob.show();
      return 0;
     }                    