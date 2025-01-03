#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,n;
	clrscr();
	printf("Enter value of X:");
	scanf("%d",&x);
	printf("Enter value of Y:");
	scanf("%d",&y);
	n=(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y);
	printf("\n N: %d",n);
	getch();
}
