// WAP to check with no. is divisible by 5, if it is divisible by 5 then add -1 after the element.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, j;
	printf("Enter the Range = ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the number = ");
		scanf("%d",&j);
		if(j%5==0)
		{
			a[i]=j;
			a[i+1]=-1;
			i++;
			n++;
		}
		else
		{
			a[i]=j;
		}
	}
	printf("Array List :: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		