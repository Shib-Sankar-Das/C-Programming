/*

A A A A . . .
B B B . . .
C C . . .
D . . .
. . .
. .
n

With ASCII

65 65 65 65 .  .  .
66 66 66  .  .  . 
67 67  .  .  . 
68  .  .  .
 .  .  .
 .  .
 n

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, n;
	char x='A';
	printf("Enter the Letter = ");
	scanf("%c",&x);
	n=(int)x;
	for(i=65;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("%c ",i);
		}
		printf("\n");
	}
	getch();
}