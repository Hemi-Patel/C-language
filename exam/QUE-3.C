#include<stdio.h>
#include<conio.h>
void main()
{
	int f_ang,s_ang,t_ang;
	clrscr();
	printf("Enter First Angle of triangle:");
	scanf("%d",&f_ang);
	printf("Enter Second Angle of triangle:");
	scanf("%d",&s_ang);
	t_ang=(f_ang+s_ang)-180;
	printf("\nThird Angle:%d",t_ang);
	getch();
}