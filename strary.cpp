#include <iostream>
#include <conio.h>
#include<string>
#include<fstream>


using namespace std;


                         //incomplete checking string array 

     class str {

public:

      string *ptr[];
      int count;
      string a,b,c,d,e,f,g,h;

      //string st1,st,ary[10];

       

      void show() {

      //string *ptr[2]={&st1,&st};

      ifstream read_count;
      read_count.open("chi.md");      //udd constructor for reading count value;
      read_count>>count;

      ifstream read_item;
      read_item.open("chidata.md");      //udd constructor for reading items;    
    
      string str[10]={a,b,c,d,e,f,g,h};
      string *ptr;

      for (int i=0;i<15;i++) {

       // read_item>>*ptr[i]; 
      }

       

        for(int i=0;i<15;i++) {

                 for (int j=0;j<10;j++) {

                  cout<<"\n"<<ptr[i+j];
                 }        

      		
      	}
      } 

      string reading(ifstream &read_item) {

            char ch;
            string temp;                            

             while((read_item.get(ch)&&ch!='\n')) {

                  temp+=ch;
                  }
               return temp;   
           }
	

     };

     int main() {
      int a; 
      str ob;
      //ob.st1="hellow";
      //ob.st="world";
      
      //ob.show();
      a=sizeof(string);
      cout<<a;
      getch();
      return 0;
     }                    