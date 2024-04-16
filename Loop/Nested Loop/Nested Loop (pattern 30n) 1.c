/*

0
1 1
0 0 0
1 1 1 1
0 0 0 0 0
1 1 1 1 1 1
0 0 0 0 0 0 0
1 1 1 1 1 1 1 1

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
			printf("%d ",i%2);
		}
		printf("\n");
	}
	getch();
}