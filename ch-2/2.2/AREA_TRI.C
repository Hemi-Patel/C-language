#include<stdio.h>
#include<conio.h>
void  main()
{
	float b,h;
	clrscr();
	printf("Enter base of Triangle:");
	scanf("%f",&b);
	printf("Enter Height of Triangle:");
	scanf("%f",&h);
	printf("\nArea of Triangle:\t%.2f",0.5*b*h);
	getch();
}