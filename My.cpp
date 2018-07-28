#include<iostream>
#include<conio.h>


using namespace std;

 class bi {

 int a,b;
      
  public:    
     int convert(int,int);
     void show();
    
  };

  int bi::convert(int x,int y) {    //function overlaoding
    char v[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},i=0;
    for(;y>=1;) {
        
	v[i]=y%x;
	i++;
	y=y/x;
//	getch();

     }  
     for(i=15;i>=0;i--) { cout<<(int)v[i];}


//     return x+y;

  }

/*  float convert(float x,float y) {  //overloading 
    
    
    return y%x;
  
  }*/


  void bi::show() { 
  bi o;
  o.a=10;

  cout<<"\n"<<o.a<<"  "<<o.b<<"\n" ;

  }

  int main() {
     bi ob;
    
 //  cout<<convert(2,11)<<"\n";
 //   cout<<
    ob.convert(2,16674);
//     cout<<
  // ob.show();

  }
