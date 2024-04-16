/*WAP to calculate interest
if you are male & your acc balance is > 5000 ----> then interest 2%
if you are female & your acc balance is > 3000 < 5000 ----> then interest 5%
if you are transgender & your acc balance is > 2000 ----> then interest 8%
*/

#include<stdio.h>
#include<conio.h>
void main ()
{
	char g;
	int accb, interest=0;
	printf("Enter the gender = ");
	scanf("%c",&g);
	printf("Enter your Account Balance = ");
	scanf("%d",&accb);
	if((g=='m' || g=='M') && accb>5000)
		interest=(accb*2)/100;
	else if((g=='f' || g=='F') && (accb>=3000 && accb<=5000))
		interest=(accb*5)/100;
	else if((g=='t' || g=='T') && accb>2000)
		interest=(accb*8)/100;
		printf("Interest = %d",interest);
	getch();
}