#include<iostream>

using namespace std;

  class mycl
{
   int a,b;

    public:
   
   mycl(int x,int y)
    { 
       a=x;
       b=y;
 
      }
   void sum(mycl &temp)
    {
      
      a=a+temp.a;
      b=b+temp.b;

       }
    void show()
    { 
      cout<<"\n"<<a;
      cout<<"\n"<<b;
      
      }

    };
   
     int main()
   {
      mycl ob1(100,200);
      mycl ob2(200,100);
      
      ob1.sum(ob2);
       
      ob1.show();
    
       }  
