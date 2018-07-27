/* Abstract Data Type */

/* Testing Operator */

#include<iostream>
#include<conio.h>

using namespace std;
int temp=1;

   int oop,op;

   int& foo() {
   op;
   oop=123;
   return oop; 
   
   }



   class abs {
      
      int a,b,r;
     
      public:

      abs() {
      cout<<"\ndefault ";getch();
        
	a=1;
	b=1;
      }
    
    abs(int x,int y,int z) {
         
   cout<<"\nparam";getch();
   
   if  (temp<2)  {
	 a=x;
	 b=y;
         r=z;
	 cout<<"\nif ";getch();
	 temp++;
	} 
      else {	  
	 a=x;
	 b=y;
	 r=0;
	 cout<<"\nelse ";getch();
	 temp++;
       }	 

        
      }
     abs(abs &cc){
      
      cout<<"\ncopy ";getch();
      //  a=cc.a;
      //  b=cc.b;
          a=5;b=10;r=15;
	  } 
      
    abs ope(abs cob){

       abs tob;
       tob.a=a+cob.a;
       tob.b=b+cob.b;
       return tob;
        

      }
   
    void add(abs pob) {
      a=1000;b=2000;
     cout<<pob.a<<"  "<<pob.b;  
     pob.a=121;pob.b=123;
        
     } 
    void show (){

   cout<<"\n"<<a<<"  "<<b<<"  "<<r<<" temp  "<<temp;


    } 
     
   };

   int main() {
    //  int y(101);

   //   int &x=y;
   //   cout<<y;
       cout<<temp;
       int i=10,j=20;
      
      cout<<"\nob  "<<temp;
      abs ob(i,j,11);
    
      cout<<"\nob1  "<<temp;
      abs ob1=ob;

      cout<<"\no  "<<temp;
      abs o(1,1,1);

    //  abs ob2(100,200);
      
    //  abs t=ob1.ope(ob2);
      //cout<<ob1.;
     // ob1.add(ob2);
      ob1.show();
      ob.show();
     // ob2.show();
     // t.show();

    o.show();
    cout<<"\n"<<temp;
    int t;
  //  t=11;
    int& re=t;
    re=12;
    foo()=456;
    cout<<"\nfoo "<<foo()<<"\n oop  "<<oop<<"  op "<<op;


   }
         
