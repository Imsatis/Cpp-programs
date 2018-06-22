#include<iostream>

using namespace std;


/**** Gotoxy Function ****/

   void gotoxy(int x,int y)
 {
      for(int m=0;m<=y;m++)  //vertical Line;
     
     {
         cout<<"\n";
	
           }

       for(int l=0;l<=x;l++)  //Horinzontal Line;
      
      {
         cout<<" ";

           }
	   
    }  

/**** Main Function Start ****/

      int main()
  { 
    int x,y;

    cout<<"Enter x";cin>>x; //Horizontal Line

    cout<<"Enter y";cin>>y; //Vertical Line

    gotoxy(x,y); //Function Calling

    cout<<"Hellow World!";
   
    }    
