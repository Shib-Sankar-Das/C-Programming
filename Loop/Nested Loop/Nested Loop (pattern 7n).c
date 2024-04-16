/*

n 
n . 
n . . 
n . . .
n . . . 4
n . . . 4 3
n . . . 4 3 2
n . . . 4 3 2 1

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, n;
	printf("Enter the number = ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}