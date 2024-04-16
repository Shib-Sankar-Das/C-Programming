/*
WAP to enter a sentence and capitalise the first and last letter of each 
word in the sentence [for example for the input string "The world is a 
stage", the output should be "ThE WorlD IS A StagE"].
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	char x[100];
	int i;
	printf("Enter the String = ");
	gets(x);
	if(x[0]>=97 && x[0]<=122)
	 x[0]=x[0]-32;
	for(i=1;x[i]!='\0';i++)
	{
		if(x[i]==' ')
		{
			if(x[i+1]>=97 && x[i+1]<=122 && x[i+2]!=' ')
              x[i+1]=x[i+1]-32;
            if(x[i-1]>=97 && x[i-1]<=122)
              x[i-1]=x[i-1]-32;
            if(x[i+1]>=97 && x[i+1]<=122 && x[i+2]==' ')
              x[i+1]=x[i+1]-32;
		}
	}
	printf("output string = %s",x);
	getch();
}