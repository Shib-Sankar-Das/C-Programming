//wap to create a student structre & search using roll No.
#include<stdio.h>
#include<conio.h>
struct Student
{
  char nm[5],grd;
  int r,m,p,ch,cs,t,avg;
};
struct Student s[3];
void main()
{
  int i,n,roll,f=0;
  printf("Enter the No. of Student = ");
  scanf("%d",&n);
  //input
  for(i=0;i<n;i++)
  {
    printf("Enter the Roll = ");
    scanf("%d",&s[i].r);  
    printf("Enter the Name = ");
    scanf("%s",&s[i].nm);              
    printf("Enter the Math Marks = ");
    scanf("%d",&s[i].m);           
    printf("Enter the Phy Marks = ");
    scanf("%d",&s[i].p);
    printf("Enter the Chem Marks = ");
    scanf("%d",&s[i].ch);
    printf("Enter the CS Marks = ");
    scanf("%d",&s[i].cs);
    s[i].t=s[i].m+s[i].cs+s[i].ch+s[i].p;
    s[i].avg=s[i].t/4;
    if(s[i].avg>=0 && s[i].avg<=40)
      s[i].grd='D';
    else if(s[i].avg>40 && s[i].avg<=60)
      s[i].grd='C';
    else if(s[i].avg>60 && s[i].avg<=80)
      s[i].grd='B';
    else if(s[i].avg>80 && s[i].avg<=90)
      s[i].grd='A';
    else
      s[i].grd='O';    
  }
  //print
  printf("Roll\tName\tMath\tPhy\tChem\tCS\tTotal\tAverage\tGrade\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%c\n",s[i].r,s[i].nm,s[i].m,s[i].p,s[i].ch,s[i].cs,s[i].t,s[i].avg,s[i].grd);
  }
  printf("Enter the Roll No. wanna search = ");
  scanf("%d",&roll);
  printf("Roll\tName\tMath\tPhy\tChem\tCS\tTotal\tAverage\tGrade\n");
  for(i=0;i<n;i++)
  {
    if(s[i].r==roll)
    {
      printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%c\n",s[i].r,s[i].nm,s[i].m,s[i].p,s[i].ch,s[i].cs,s[i].t,s[i].avg,s[i].grd);
      f=1;
      break;      
    }
  }
  if(f!=1)
    printf("Search not found");
  
  getch();
}