/*

n 
n .
n . .
n . . . 
n . . . 9 
n . . . 9 7
n . . . 9 7 5
n . . . 9 7 5 3
n . . . 9 7 5 3 1

*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, n;
	printf("Enter the number = ");
	scanf("%d",&n);
	for(i=n;i>=1;i=i-2)
	{
		for(j=n;j>=i;j=j-2)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}