#include<iostream>
#include<conio.h>


 using namespace std;

   class con
{
    public:
   

     int chk(int x,int y)
    { 
      if(x<10&&y<10)
     { int r;
      r=x+y;
      cout<<"\nr "<<r;
         }
       else 
       return 0;

       }   

     };

        int main()
  {
     int a=0,b=0;
     con obj;
     
     while(obj.chk(a,b))
     { 
     a++;b++;
     obj.chk(a,b);
     //cout<<"\nob "<<obj;
     getch();
     
        }
  
       }	
