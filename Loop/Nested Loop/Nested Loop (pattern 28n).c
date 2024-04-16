/*

* * * * * * * * *
 * * * * * * * *
  * * * * * * *
   * * * * * *
    * * * * * 
     * * * *
      * * *
       * *
        *

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, sp, n;
	printf("Enter the number = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(sp=1;sp<i;sp++)
		{
			printf(" ");
		}
		for(j=i;j<=n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}