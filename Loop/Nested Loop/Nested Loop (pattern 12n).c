/*

1
3 1
5 3 1
7 5 3 1
9 7 5 3 1
. 9 7 5 3 1
. . 9 7 5 3 1
. . . 9 7 5 3 1
n . . . 9 7 5 3 1

*/


#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, n;
	printf("Enter the number = ");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		for(j=i;j>=1;j=j-2)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}