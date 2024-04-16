// WAP to search an element with in an array (linear search)

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, ser, f=0, j, c=0;
	printf("Enter the Range = ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the number = ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array List :: \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	printf("\nEnter the no. to be searches for = ");
	scanf("%d",&ser);
	for(i=0;i<n;i++)
	{
		if(a[i]==ser)
		{
			f=1;
			j=i;
			c++;
		}
		if(f==1)
		 printf("%d found at %d index %d position\n",ser,j,j+1);
		f=0;
	}
	if(c==0)
	 printf("%d Not found",ser);
	getch();
}