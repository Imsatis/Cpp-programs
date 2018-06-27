#include<iostream>
#include<conio.h>

using namespace std;


    class add
{
    int a,b;

    public:

      add(int x,int y)
     {
         a=x;
	 b=y;
          
	  }   

      add(add &o1,add &o2)
     {
       a=o1.a+o2.a;
       b=o1.b+o2.b;

        } 

    void show()
   { 
      cout<<"\n"<<a;
      cout<<"\n"<<b;
      }  

   };    


   int main()
 {
   int a,b,c,d;
   cin>>a>>b>>c>>d;
    add ob1(a,b);
    add ob2(c,d);
    add temp(ob1,ob2);
    add ob3(a,d);
    add temp();	


    ob1.show();

    ob2.show();

    ob3.show();
    getch();

     }  


