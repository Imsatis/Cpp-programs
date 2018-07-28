#include<iostream>
#include<fstream>


using namespace std;

  class bi {

  int a,b;
     
     public:
     int convert(int,int);
     void show();
    
  };

  int bi::convert(int x,int y) {    //function overlaoding
    return x+y;

  }

  float convert(float x,float y) {  //overloading 
    
    
    return y%x;
  
  }


  void show() {}

  int main() {
     bi ob;
    
   cout<<convert(2,11)<<"\n"<<ob.convert(10,10);
  
  }
