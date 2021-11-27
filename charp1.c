#include<stdio.h>
main()
{
int ar[]={1,2,3,4,5,6};
int *pointer;
pointer=ar[4];
int *hy=ar[3];
printf("5th from ar %d and its address is %p\n",pointer,pointer);
printf("add of poin %p\n",&ar[4]);
printf("the address of %d is %p\n",*hy,hy);
}

