/*

1 - - - . . . - - - 1
1 2 - - . . . - - 1 2
1 2 3 - . . . - 1 2 3
1 2 3 4 . . . 1 2 3 4
1 2 3 4 n . 1 2 3 4 n

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sp,k,n;
	printf("Enter the number = ");
	scanf("%d",&n);
	k=n-1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(sp=1;sp<=(2*k);sp++)
		{
			printf(" ");
		}
		k--;
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}