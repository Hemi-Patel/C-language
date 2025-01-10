#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;
	clrscr();
	printf("Input temperature in Celsius:");
	scanf("%f",&c);
	f=((9*c)/5)+32;
	printf("\nThe temperature in Fahrenheit:%.2f",f);
	getch();
}
