/*

* * * *
  * * *
    * *
	  * 

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, sp;
	for(i=1;i<=4;i++)
	{
		for(sp=1;sp<i;sp++)
		{
			printf(" ");
		}
		for(j=i;j<=4;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}