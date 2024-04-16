/* 
WAP to input a sentence and then replace every blank 
in the sentence with the character "#". Print the final string.
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	char x[100];
	int i;
	printf("Enter the string = ");
	gets(x);
	for(i=0;x[i]!='\0';i++)
	{
		if(x[i]==' ')
		 x[i]='#';
	}
	printf("String = %s",x);
	 getch();
}