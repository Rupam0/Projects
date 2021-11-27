#include<stdio.h>
int addNumber(int a, int b);
int main()
{
	int num1, num2,sum;
	printf("Enter 1st number: ");
	scanf("%d", &num1);
	printf("Enter 2nd number: ");
	scanf("%d", &num2);
	sum = addNumber(num1,num2);
	printf("the sum is %d\n", sum);
}

int addNumber(int a, int b)
{
	int result;
	result = a + b;
	return result;
}
