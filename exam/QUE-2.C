#include<stdio.h>
#include<conio.h>
void main()
{
	float salary,hra,da,ta,gross_sal;
	clrscr();
	printf("Enter Base Salary:");
	scanf("%f",&salary);
	hra=salary*10/100;
	da=salary*5/100;
	ta=salary*8/100;
	printf("\nHRA=10%");
	printf("\nDA=5%");
	printf("\nTA=8%");
	gross_sal=salary+hra+da+ta;
	printf("\nGross Salary:%.2f",gross_sal);
	getch();
}