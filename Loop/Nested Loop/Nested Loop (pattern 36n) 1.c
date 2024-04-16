/*

n 
n . 
n . . 
n . . . 
n . . . D
n . . . D C 
n . . . D C B
n . . . D C B A

With ASCII

n 
n . 
n . . 
n . . . 
n . . . 68
n . . . 68 67
n . . . 68 67 66
n . . . 68 67 66 65

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
		for(j=n;j>=i;j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	getch();
}