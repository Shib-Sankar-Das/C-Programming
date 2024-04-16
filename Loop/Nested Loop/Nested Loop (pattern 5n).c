/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 . 
1 2 3 4 . .
1 2 3 4 . . .
1 2 3 4 . . . n

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, n;
	printf("Enter the number = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}