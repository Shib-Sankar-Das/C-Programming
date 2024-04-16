//WAP to create Employee dataset using structure 
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{
  char eid[10],enm[20],desg;
  float bs,da,ta,hra,gsal,pf,netsal;                           
};
struct employee e[2];

void main()
{
 int i,n,f=0;
 char name[10];
 printf("Enter how many record u want=");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   printf("Enter the Emp Id=");
   scanf("%s",&e[i].eid);       
   printf("Enter the Emp Name=");
   scanf("%s",&e[i].enm);
   printf("Enter the Basic Salary=");
   scanf("%f",&e[i].bs);
   e[i].da=e[i].bs*.15;                       
   e[i].ta=e[i].bs*.20;                       
   e[i].hra=e[i].bs*.25;                       
   e[i].gsal=e[i].bs+e[i].da+e[i].ta+e[i].hra;                       
   e[i].pf=e[i].gsal*.30;
   e[i].netsal=e[i].gsal-e[i].pf;
   if(e[i].gsal>=0 && e[i].gsal<=10000)
    e[i].desg='P';
   else if(e[i].gsal>10000 && e[i].gsal<=20000)
    e[i].desg='C';
   else if(e[i].gsal>20000 && e[i].gsal<=40000)
    e[i].desg='E';
   else
    e[i].desg='B';
 }
 printf("Enter the Name u want to search=");
 scanf("%s",&name);
 for(i=0;i<n;i++)
 {
  if(strcmp(e[i].enm,name)==0)
  {
  printf("------------------------------------------------------------------------\n");
 printf("EmpId\tEmpName\tBasic\tDA\tTA\tHRA\tGross\tPF\tNetsal\tDesg\n");
 printf("------------------------------------------------------------------------\n");
   printf("%s\t%s\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%c\n",e[i].eid,e[i].enm,e[i].bs,e[i].da,e[i].ta,e[i].hra,e[i].gsal,e[i].pf,e[i].netsal,e[i].desg);                                                                                     
   f=1;
   break;
  }
 }
 if(f==0)
  printf("Record Not Found");
 getch();                                                                
}