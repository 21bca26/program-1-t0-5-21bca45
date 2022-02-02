/* write a program to print digits in reverse order*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i;
	clrscr();
	printf("\n Enter any Number:");
	scanf("%d",&a);
	while(a>0)
	{
		i=a%10;
		//printf("%d",i);
		a=a/10;
	}
	getch();
}
