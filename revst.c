#include<stdio.h>
#include<stdint.h>
#include<string.h>

void main()
{
	int i,l;
	char s[1000],a;
	
	printf("\nEnter a string (less than 1000 characters) :\t");
	scanf("%[^\n]s",s);
	
	l = strlen(s) -1;
	
	for(i = l ; i > l/2 ; i --)
	{
		a = s[i];
		s[i] = s[l - i];
		s[l - i] = a; 
	}
	
	printf("After reversing the string we get: %s\n",s);
}
