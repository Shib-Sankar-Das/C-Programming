// WAP to concatenate 2 strings.

#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100], b[100], c[200];
	int i, j;
	printf ("Enter the 1st string = ");
	gets(a);
	printf ("Enter the 2nd string = ");
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
	}
	j=i;
	c[j]=' ';
	for(j++,i=0;b[i]!='\0';i++,j++)
	{
		c[j]=b[i];
	}
	c[j]='\0';
	for(i=0;c[i]!='\0';i++)
	{
		printf("%c",c[i]);
	}
	getch();
}