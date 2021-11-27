#include<stdio.h>
main()
{
int a=-3;
while(a<0)
{
printf("you are inside while loop\n");
a=a+1;
}
printf("came out of the while loop\n");
do
{
printf("you are inside do-while loop\n");
a=a+1;
}
while(a<0);
printf("after do while loop\n");
}
