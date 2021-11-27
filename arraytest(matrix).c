#include<stdio.h>
int main()
{
	int a[2][2],i,j;
	printf("Enter first value\n");
	scanf("%d",&a[0][0]);
	printf("Enter 2nd value\n");
	scanf("%d",&a[0][1]);
	printf("Enter third value\n");
	scanf("%d",&a[1][0]);
	printf("Enter fourth value\n");
	scanf("%d",&a[1][1]);
	printf("The matrix A is\n");
	
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ", a[i][j]);
		
		}
		printf("\n");
	}
}