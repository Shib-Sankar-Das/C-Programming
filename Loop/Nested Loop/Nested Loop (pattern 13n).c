/*

1 3 5 7 9 . . . n
1 3 5 7 9 . . .
1 3 5 7 9 . .
1 3 5 7 9 .
1 3 5 7 9
1 3 5 7
1 3 5
1 3
1

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
		for(j=1;j<=i;j=j+2)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}