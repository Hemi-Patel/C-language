#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter value of A:");
	scanf("%d",&a);
	printf("Enter value of B:");
	scanf("%d",&b);
	printf("\n\nBefore Swapping\n\n");
	printf("A : %d\n",a);
	printf("B : %d\n",b);
	c=a;
	a=b;
	b=c;
	printf("\n\nAfter Swapping\n\n");
	printf("A : %d\n",a);
	printf("B : %d\n",b);
	getch();
}