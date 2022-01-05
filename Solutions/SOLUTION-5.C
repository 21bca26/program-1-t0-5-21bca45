/* write a program to enter anumbver and check it is prime or not */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,count=0,i;
	clrscr();
	printf("\n Enter any Number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		 if(a%i==0)
		 {
			count++;
		 }
	}
	if(count==2)
	printf("\n It is Prime Number");
	else
	printf("\n It is not a Prime Number");
	getch();
}