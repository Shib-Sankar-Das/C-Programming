//WAP to check Null Matrix.

#include<stdio.h>
#include<conio.h>
void main()
{
 int i, j, r1, c1, f=0;
 printf("Please Enter the number of row & column of First Matrix - ");
 scanf("%d%d",&r1,&c1);
 int a[r1][c1];
 printf("\n");
 	for(i=0;i<r1;i++)
 	{
 		for(j=0;j<c1;j++)
 		{
 			printf("Enter (%d,%d) 1st Array- ",i,j);
 			scanf("%d",&a[i][j]);
 			if(a[i][j]!=0)
 			 {
 			 	f=1;
 			 	break;
			 }
		}
		if(f==1)
		break;
	}

 if(!f)
  printf("\nNull Matrix");
 else
  printf("\nNOT Null Matrix");
 	getch();
}