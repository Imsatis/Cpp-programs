#include<iostream>

using namespace std;

  class mycl
{
   int a,b;

    public:
   
  /** mycl()
  {
    a=0;
    b=0;
     } **/

   mycl(int x,int y)
    { 
       a=x;
       b=y;
 
      }
   mycl sum(mycl &temp)
    {
      mycl t(0,0);

      t.a=a+temp.a;
      t.b=b+temp.b;
     // return t;

       }
    void show()
    { 
      cout<<"\n"<<a;
      cout<<"\n"<<b;
      
      }

    };
   
     int main()
   {
      mycl ob1(10,200);
      mycl ob2(200,10);
      
      mycl t=ob1.sum(ob2);
       
      ob1.show();
      t.show();
    
       }  
