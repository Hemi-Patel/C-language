#include<stdio.h>
#include<conio.h>
void main()
{
	float r;
	const float PI=3.14;
	clrscr();
	printf("Enter radius of circle:");
	scanf("%f",&r);
	printf("\n Area of circle : %.2f",PI*r*r);
	getch();
}