// WAP to check list of Prime number with in an array.

#include<stdio.h>
#include<conio.h>
void main()
{
	int n, x, i, j, c=0, k=0;
	printf("Enter the Range = ");
	scanf("%d",&n);
	int arr[n/2];
	printf("Array of Prime Number :: \n");
	for(i=1;i<=n;i++)
	{
		for(x=i,j=1;j<=i;j++)
		{
			if(i%j==0)
			 c++;
		}
		if(c==2)
		{
			arr[k]=x;
			printf("%d ",arr[k]);
			k++;
		}
		c=0;
	}
	getch();
}