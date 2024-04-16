/*

A
A B
A B C
A B C D
A B C D .
A B C D . .
A B C D . . .
A B C D . . . n

With ACSII

65
65 66
65 66 67
65 66 67 68
65 66 67 68 .
65 66 67 68 . .
65 66 67 68 . . .
65 66 67 68 . . . n

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
		for(j=65;j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	getch();
}