#include<stdio.h>
#include<conio.h>
void main()
{
	float r;
	const float PI=3.14;
	clrscr();
	printf("Enter Radius of Circle:");
	scanf("%f",&r);
	printf("\n Perimeter of Circle:\t%.2f",2*PI*r);
	getch();
}