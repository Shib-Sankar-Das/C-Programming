#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,rem,c=0,sq,a,b,x,p,r,j,i,k=0;
	printf("Enter the number = ");
	scanf("%d",&n);
	int arr[10];
	printf("Array of Kapreker Number :: \n");
	for(i=1;i<=n;i++)
	{
		for(x=i,j=i;j!=0;j=j/10)
		{
			c++; 
		}
		sq=x*x;
		a=pow(10,c);
		b=sq%a;
		p=sq/a;
		if(x==(b+p))
		{
		  arr[k]=x;
		  printf("%d ",arr[k]);
		  k++;
	    }
		c=0;
	}
	getch();
}