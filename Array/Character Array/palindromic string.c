// WAP to palindromic string.

#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100];
	int i, j, f=0;
	printf("Enter the string = ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
	}
	for(j=i-1,i=0;i<=j;i++,j--)
	{
		if(a[i]!=a[j])
		{
			f=1;
			break;
		}
	}
	if(f==0)
	 printf("Palindrome String");
	else
	 printf("NOT Palindrome String");
	getch();
}