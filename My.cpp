#include<iostream>
#include<conio.h>
#define x 2


using namespace std;

 class bi {

// int a,b;
  char v[];

      
  public:    
     void convert(int);
     void show();
    
  };

  void bi::convert(int y) {    //function overlaoding
      char i=0;

     for(;y>=1;) {
        
	v[i]=y%x;
	i++;
	y=y/x;
//	cout<<"hellow";
//	getch();

     }  
 //    cout<<sizeof(v[i]);
    for(int j=i-1;j>=0;j--) { cout<<(int)v[j];}


  }

/*  float convert(float x,float y) {  //overloading 
    
    
    return y%x;
  
  }*/


  void bi::show() { 
  bi o;
//  o.a=10;

 // cout<<"\n"<<o.a<<"  "<<o.b<<"\n" ;

  }

  int main() {
     bi ob;
     int y;
     cin>>y;
    
 //  cout<<convert(2,11)<<"\n";
   ob.convert(y);
//     cout<<
  // ob.show();

  }
