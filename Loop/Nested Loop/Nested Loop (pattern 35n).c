/*

A
A B
A B C
A B C D
A B C D .
A B C D . .
A B C D . . .
A B C D . . . n

With out ASCII

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
	int i, j, n, k;
	char x='A';
	printf("Enter the letter = ");
	scanf("%c",&k);
	n=(int)k;
	for(i=1;i<=n-64;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",x);
			x++;
		}
		printf("\n");
		x='A';
	}
	getch();
}