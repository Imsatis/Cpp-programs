#include<stdio.h>
#include<conio.h>

void main()
{
 int i,j,k;
 printf("Enter The No = ");
 scanf("%d",&k);
 for(i=0;i<k;i++)
 {
  for(j=k;j>i;j--)
  printf("*");
  printf("\n");
 }

 getch();
 clrscr();
}