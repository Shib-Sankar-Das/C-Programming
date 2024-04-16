/*

    *      ---*      ---*      ---1      ---1
   * *     --* *     --*-*     --1-1     --121
  *   *    -*   *    -*---*    -1---1    -12321
 *     *   *     *   *-----*   1-----1   1234321
  *   *    -*   *    -*---*    -1---1    -12321
   * *     --* *     --*-*     --1-1     --121
    *      ---*      ---*      ---1      ---1

*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, sp;
	for(i=1;i<=4;i++)
	{
		for(sp=3;sp>=i;sp--)
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
	for(i=3;i>=1;i--)
	{
		for(sp=i;sp<4;sp++)
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