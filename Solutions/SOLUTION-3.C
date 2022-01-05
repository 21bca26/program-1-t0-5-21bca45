/* write a program to check whether entered Number is Palindrome Number or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0,d;
	clrscr();
	printf("\n Enter any Number:");
	scanf("%d",&a);
	b=a;
	while(a>0)
	{
		d=a%10;
		c=d+(c*10);
		a=a/10;
	}
	if(b==c)
	printf("\n %d It is a Palindrome Number",c);
	else
	printf("\n %d It is not a Palindrome Number",c);
	getch();
}