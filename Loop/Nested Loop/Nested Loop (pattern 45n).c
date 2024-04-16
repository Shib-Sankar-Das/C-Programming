/*

    *      ----*      ----*      ----1      ----1
   * *     ---* *     ---*-*     ---1-1     ---121
  *   *    --*   *    --*---*    --1---1    --12321
 *     *   -*     *   -*-----*   -1-----1   -1234321
n       n  n       n  n-------n  n-------n  nnnnnnnnn
 *     *   -*     *   -*-----*   -1-----1   -1234321
  *   *    --*   *    --*---*    --1---1    --12321
   * *     ---* *     ---*-*     ---1-1     ---121
    *      ----*      ----*      ----1      ----1

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, sp, n;
	printf("Enter the Range = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(sp=n-1;sp>=i;sp--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(j==1)
			printf("*");
			else
			printf(" ");
		}
		for(j=i-1;j>=1;j--)
		{
			if(j==1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(sp=i;sp<n;sp++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(j==1)
			printf("*");
			else
			printf(" ");
		}
		for(j=i-1;j>=1;j--)
		{
			if(j==1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	getch();
}