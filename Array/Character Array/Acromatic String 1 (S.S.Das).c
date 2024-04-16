/*
WAP to print the acromatic string
input --> Shib Sankar Das
Output --> S.S.Das
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	char x[100];
	int i, j;
	printf("Enter the String = ");
	gets(x);
	if(x[0]>=97 && x[0]<=122)
		printf("%c",x[0]-32);
	else
		printf("%c",x[0]);
	for(i=1;x[i]!='\0';i++)
	{
		if(x[i]==' ')
		{
			if(x[i+1]>='a' && x[i+1]<='z')
			printf(".%c",x[i+1]-32);
			else
			printf(".%c",x[i+1]);
			j=i;
		}
	}
	for(j=j+2;x[j]!='\0';j++)
	{
		printf("%c",x[j]);
	}
	getch();
}