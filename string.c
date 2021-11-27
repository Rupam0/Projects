#include<stdio.h>
main()
{
int a=0;
char my_name[]={'r','u','p'};
char my_name1[]="rup";
printf("%s\n",my_name);
printf("%s\n",my_name1);
printf("%d\n",sizeof(my_name));
printf("%d\n",sizeof(my_name1));
for(a=0;a<10;a++)
 {
 printf("%d\t%d\t%d\n",a,my_name[a],my_name1[a]);
 }
} 
