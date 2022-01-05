 /* write a program to print sum of 1 to 5 Digit
Date:16/12/21 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1,sum=0;
	clrscr();
	while(a<=5)
	{
	  //	printf("%d",a);
		sum=sum+a;
		a=a+1;
	  }
		printf("\n sum of 1 to 5 Number is %d",sum);
		getch();
}