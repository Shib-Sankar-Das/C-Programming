/*

   *
  * *
 * * *
* * * *
 * * *
  * *
   *
   
---1
--1 2
-1 2 3
1 2 3 4
-1 2 3
--1 2
---1
   

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, sp;
	for(i=1;i<=4;i++)
	{
		for(sp=3;sp>=i;sp--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=3;i>=1;i--)
	{
		for(sp=i;sp<4;sp++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}