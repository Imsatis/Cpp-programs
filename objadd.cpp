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

     add sum(add &temp)
    { 
       add t(0,0);
      t.a=a+temp.a;
      t.b=b+temp.b;
      return t; 

        }   

    void show()
   { 
      cout<<"\n"<<a;
      cout<<"\n"<<b;
      }  

   };    


   int main()
 {
   // int a,b,c,d;
   // cin>>a>>b>>c>>d;
   // add ob1(a,b);
   // add ob2(c,d);
   // add ob3(ob1,ob2);

      add ob1(100,200);
      add ob2(200,100);

      add temp=ob1.sum(ob2);


   // ob1.show();

   // ob2.show();

   // ob3.show();

   temp.show();
    getch();

     }  


