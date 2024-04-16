/*

n 
n . 
n . . 
n . . . 
n . . . D
n . . . D C 
n . . . D C B
n . . . D C B A

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
	int i, j, n;
	char x='A', y;
	printf("Enter the Letter = ");
	scanf("%c",&x);
	y=x;
	n=(int)x;
	for(i=1;i<=n-64;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",x);
			x--;
		}
		printf("\n");
		x=y;
	}
	getch();
}