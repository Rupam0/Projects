#include<stdio.h>
main()
{
int a;
int c[5]={10,20,30,40,50};
for(a=0;a<5;a++)
 {
 printf("%d\t%d\t%p\n",a,c[a],&c[a]);
 }
} 
