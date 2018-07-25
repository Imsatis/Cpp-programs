#include<iostream>
//#include<fstream>

int a,b;


  class AI {
  
  };

  struct data {
     
     int a,b;
  }ob;

 void test() {

  #define swap (int)ob.a
   

}

 int main() {

    data ob;
    int a,b;
    a=1;b=1;
    ob.a=2;ob.b=2;
    ::a=3;::b=3; 
    ::ob.a=4;::ob.b=4;
    //std::cout<<ob.a<<"  "<<swap;
 
 // std::cout<<"hellow";
  std::cout<<a<<b<<"\n"<<ob.a<<ob.b<<"\n"<<::a<<::b<<"\n"<<::ob.a<<::ob.b; 
 }
