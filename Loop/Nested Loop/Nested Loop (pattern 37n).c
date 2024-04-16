/*

A B C D . . . n
A B C D . . .
A B C D . .
A B C D .
A B C D
A B C
A B
A 

With ASCII

65 66 67 68 . . . n
65 66 67 68 . . .
65 66 67 68 . .
65 66 67 68 .
65 66 67
65 66
65

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
	for(i=n;i>=65;i--)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	getch();
}