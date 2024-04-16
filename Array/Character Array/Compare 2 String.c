// WAP to compare 2 string.

#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100], b[100];
	int i, f=0;
	printf("Enter the 1st string = ");
	gets(a);
	printf("Enter the 2nd string = ");
	gets(b);
	for(i=0;a[i]!='\0' && b[i]!='\0';i++)
	{
		if(a[i]!=b[i])
		{
			f=1;
			break;
		}
	}
	if(f==0)
	 printf("String Matched");
	else
	 printf("String NOT Matched");
	getch();
}