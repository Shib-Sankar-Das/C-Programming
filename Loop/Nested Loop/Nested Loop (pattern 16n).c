/*

n . . . 9 7 5 3 1
n . . . 9 7 5 3
n . . . 9 7 5
n . . . 9 7
n . . . 9
n . . . 
n . .
n .
n

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
		for(j=n;j>=i;j=j-2)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}