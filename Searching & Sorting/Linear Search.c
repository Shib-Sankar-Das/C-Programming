//Linear Search

#include <stdio.h>
#include <conio.h>
void main()
{
	int c, f=0, n, s, a[100];
  	printf("Enter number of elements = ");
  	scanf("%d", &n);
  	printf("Enter %d integers\n", n);
  	for(c=0;c<n;c++)
  	{
   		printf("Enter the No.= ");
    	scanf("%d",&a[c]);
  	}
  	printf("Enter the element for search = ");
  	scanf("%d",&s);
  	for(c=0;c<n;c++)
  	{
  		if(a[c]==s)
   		{
   			printf("Element %d is found at %d index",s,c);
   			f=1;
   			break;
		}
  	}
  	if(f==0)
  	printf("Element %d is not found",s);
  	getch();
}