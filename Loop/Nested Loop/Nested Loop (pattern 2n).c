/*

. . . . n
1 2 3 4
1 2 3
1 2
1

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
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}