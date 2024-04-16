/*

n . . . D C B A
n . . . D C B
n . . . D C
n . . . D
n . . . 
n . .
n . 
n 

With ASCII

n . . . 68 67 66 65
n . . . 68 67 66
n . . . 68 67
n . . . 68
n . . . 
n . . 
n . 
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
			printf("%c ",j);
		}
		printf("\n");
	}
	getch();
}