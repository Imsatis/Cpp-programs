/* Abstract Data Type */

/* Testing Operator */

#include<iostream>

using namespace std;

   class abs {
      
      int a,b,r;
      public:

      abs() {
        
	a=1;
	b=1;
      }
    
    abs(int x,int y) {
         
         a=x;
	 b=y;
        
      }
     abs(abs &cc){
        
        a=cc.a;
	b=cc.b;
     } 
      
    abs operator+(abs cob){

       abs tob;

        

      }
   
    void add(abs pob) {
      a=1000;b=2000;
     cout<<pob.a<<"  "<<pob.b;  
     pob.a=121;pob.b=123;
        
     } 
    void show (){

     cout<<"\n"<<a<<"  "<<b;


    } 
     
   };

   int main() {

      abs ob1(10,20);

      abs ob2(1.1);
      
      ob1;
      //cout<<ob1.;
      ob1.add(ob2);
      ob1.show();
      ob2.show();
   
   }
