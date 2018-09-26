
#include<iostream>
using namespace std;
   int main() {
     double distance=0,n_lim=0,walked=0;
     long excp=0;
     int day=0,index=0;

       cin>>distance>>n_lim>>excp;
     
     long *ex_day = new long[excp],*ex_lim = new long[excp];
     
     for(int i=0;i<excp;i++) cin>>ex_day[i]>>ex_lim[i];
      
        while(walked<distance) {
             day++;
          if(day==ex_day[index]) {
            walked+=ex_lim[index];
	    index++;
           }
        else  walked+=n_lim;
       
     }
       delete ex_day;
       delete ex_lim;
       cout<<day;
       return 0;
}
