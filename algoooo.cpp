#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("A program to calculate the average of five\n");
	printf("Enter first number\n");
	scanf("%d",&a);
	printf("Enter second number\n");
	scanf("%d",&b);
	printf("Enter thirth number\n");
	scanf("%d",&c);
	printf("Enter fourth number\n");
	scanf("%d",&d);
	printf("Enter fifth number\n");
	scanf("%d",&e);
	f=(a+c+b+d+e)/5;
	printf("The average of the numbers you enter is: %d",f);
	return 0;
}

