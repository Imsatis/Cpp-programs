#include<iostream>
#include<conio.h>


 //using function in while(condition) with the help of return type (int or bool);

 //work succesfully;


 using namespace std;

   class con
{
    public:
   

     int chk(int x,int y)     
    { 
      if(x<10&&y<10)
     { int r;
      r=x+y;                //when func is working it return no-zero and
      cout<<"\nr "<<r;      //when the condition false it return zero;
         }
       else 
       return 0;

       }   

     };

        int main()
  {
     int a=0,b=0;
     con obj;            //object;
     
     while(obj.chk(a,b))       //using object.function as a while condition;
     { 
     a++;b++;
     obj.chk(a,b);             //this loop terminate when object.function
                               //return 0 and condition will false;
     getch();
     
        }
      int val(1000);           //variable initializing with passing a value;
      cout<<val;
  
       }	
