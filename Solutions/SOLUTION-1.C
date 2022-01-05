 /* write a program to print sum of 1 to 5 Digit
Date:16/12/21 */
#include<stdio.h>
#include<conio.h>
void main()
{
 	int a,n,sum=0;
 	clrscr();
 	printf("\n enter the value:");
 	scanf("%d",&a);
 	while(a>0)
 	{
		 n=a%10;
	 	sum=sum+n;
	 	a=a/10;
 	}
  	printf("\n sum of number is %d",sum);
 	getch();
}
