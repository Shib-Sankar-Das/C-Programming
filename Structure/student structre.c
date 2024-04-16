//wap to create a student structre
#include<stdio.h>
#include<conio.h>
struct Student
{
 char roll[10],nm[10],gr;
 int m,p,c,cs,tot,avg;
};
struct Student s[3]; 
void main()
{
 int i,n;
 printf("Enter how many students data u want 2 store=");
 scanf("%d",&n);
 //input
 for(i=0;i<n;i++)
 {
  printf("Enter the Roll=");
  scanf("%s",&s[i].roll);
  printf("Enter the Name=");
  scanf("%s",&s[i].nm);
  printf("Enter the Marks of Math=");
  scanf("%d",&s[i].m);
  printf("Enter the Marks of Phy=");
  scanf("%d",&s[i].p);
  printf("Enter the Marks of CHem=");
  scanf("%d",&s[i].c);
  printf("Enter the Marks of CS=");
  scanf("%d",&s[i].cs);
  s[i].tot=s[i].m+s[i].p+s[i].c+s[i].cs;
  s[i].avg=s[i].tot/4;
  if(s[i].avg>=0 && s[i].avg<=40)
    s[i].gr='D';
  else if(s[i].avg>40 && s[i].avg<=60)
    s[i].gr='C';
  else if(s[i].avg>60 && s[i].avg<=80)
    s[i].gr='B';
  else if(s[i].avg>80 && s[i].avg<=90)
    s[i].gr='A';
  else
    s[i].gr='E';
 }
 //print
 printf("\nRoll\tName Of The Student\tMath\tPhy\tChem\tCs\tTotal\tAverage\tGrade\n");
 for(i=0;i<n;i++)
 {
   printf("%s\t%s\t\t%d\t%d\t%d\t%d\t%d\t%d\t%c\n",s[i].roll,s[i].nm,s[i].m,s[i].p,s[i].c,s[i].cs,s[i].tot,s[i].avg,s[i].gr);
 }   
 getch();
}