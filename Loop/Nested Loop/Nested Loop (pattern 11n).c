/*

1
1 3
1 3 5
1 3 5 7
1 3 5 7 9
1 3 5 7 9 .
1 3 5 7 9 . .
1 3 5 7 9 . . .
1 3 5 7 9 . . . n

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
		for(j=1;j<=i;j=j+2)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}