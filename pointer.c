#include<stdio.h>
int main()
{

int  q;
q = 8;
printf("a value is %d\n", q);
int *p;
p = &q;
*p = 10;
printf("new value is %d\n", *p);
}