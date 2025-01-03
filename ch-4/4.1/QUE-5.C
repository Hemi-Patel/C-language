#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Enter value of A:");
	scanf("%d",&a);
	printf("Enter value of B:");
	scanf("%d",&b);
	printf("\n\nBefore Swapping\n\n");
	printf("A : %d\n",a);
	printf("B : %d\n",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n\nAfter Swapping\n\n");
	printf("\nA : %d",a);
	printf("\nB : %d",b);
	getch();
}