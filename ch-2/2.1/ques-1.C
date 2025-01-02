#include<stdio.h>
#include<conio.h>
void main()
{
	int a=20;
	int b=10;
	clrscr();
	printf("Addition of %d and %d is:%d\n\n",a,b,a+b);
	printf("Subtraction of %d and %d is:%d\n\n",a,b,a-b);
	printf("Multiplication of %d and %d is:%d\n\n",a,b,a*b);
	printf("Division of %d and %d is:%d\n\n",a,b,a/b);
	printf("Modulo of %d and %d is:%d\n\n",a,b,a%b);

	printf("%d + %d = %d\n\n",a,b,a+b);
	printf("%d - %d = %d\n\n",a,b,a-b);
	printf("%d * %d = %d\n\n",a,b,a*b);
	printf("%d / %d = %d\n\n",a,b,a/b);
	printf("%d ",a);
	printf(" % ");
	printf("%d = %d",b,a%b);
	getch();
}