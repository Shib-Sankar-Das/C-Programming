//WAP to check greater between 2 no. by using switch case.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter 2 No. = ");
	scanf("%d%d",&a,&b);
	switch(a>b)
	{
		case 1:
			printf("1st No. %d is Greater",a);
			break;
		case 0:
			if(a<b)
			printf("2nd No. %d is Greater",b);
			else
			printf("Both are equal");
			break;
	}
	 getch();
}