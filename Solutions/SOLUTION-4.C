/* write a Program to check whether Entered Number is Armstrong or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,arm=0;
	clrscr();
	printf("\n Enter any Number:");
	scanf("%d",&a);
	c=a;
	while(a>0)
	{
		b=a%10;
		arm=(b*b*b)+arm;
		a=a/10;

	}
	if(c==arm)
	printf("%d It is a Armstrong Number",arm);
	else
	printf("%d It is not a Armstrong Number",arm);
	getch();
}