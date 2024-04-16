/*

1
2 3
4 5 6
7 8 9 10
11 12 13 14 
15 16 18 19 20
.  .  .  .  .  .
.  .  .  .  .  .  .
.  .  .  .  .  .  .  .
n  n  n  n  n  n  n  n  n

*/


#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, k=1, n;
	printf("Enter the range = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
	getch();
}