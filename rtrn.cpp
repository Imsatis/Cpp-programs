#include<iostream>

int add(int,int);
long multi(int,int);

using namespace std;

  int  main()
{    
    int a,b,res1,b1,b2,res2,r,f,reg;
    long fee;
    cout<<"Enter The no a and b ";cin>>a;cin>>b;
         res1=add(a,b);
    cout<<"Sum of Two no is = "<<res1;

    cout<<"\nEnter 1st and 2nd batch = ";cin>>b1;cin>>b2;
          res2=add(b1,b2);
    cout<<"Sum of 1st and 2nd Batch = "<<res2;

    cout<<"\nEnter Registration Amount and Fee = ";cin>>r;cin>>f;	  
        reg=add(r,f);

    cout<<"Total fees = "<<reg;

         fee=multi(res2,reg);
    cout<<"\nTotal Collection is = "<<fee;
}    

      int add(int x, int y)
 {

    int r;
    r=x+y;
    return r;

 }   

        long multi(int i,int j)
  {
      long amt;
      amt=(long)i*j;
      return amt;
  }	  
