//WAP to create Employee dataset and salary amount determination using structure 
#include<stdio.h>
#include<conio.h>
struct Emp
{
  char nm[10],desg;
  int bs,da,ta,hra,gs,pf,net,ma;     
};
struct Emp e[5];                     
struct Emp t;
void main()
{
  int i,n,j;
  printf("Enter the Range = ");
  scanf("%d",&n);
  //input
  
  for(i=0;i<n;i++)
  {
     printf("Enter the Name = ");
     scanf("%s",&e[i].nm);
     printf("Enter the Basic Salary = ");
     scanf("%d",&e[i].bs);
     e[i].da=(e[i].bs*5)/100;
     e[i].ta=(e[i].bs*10)/100;
     e[i].hra=(e[i].bs*15)/100;
     e[i].ma=(e[i].bs*10)/100;
     e[i].gs=e[i].bs+e[i].da+e[i].ta+e[i].hra+e[i].ma;
     e[i].pf=(e[i].bs*20)/100;
     e[i].net=e[i].gs-e[i].pf;
     if(e[i].bs>=0 && e[i].bs<=10000)
       e[i].desg='P';
     else if(e[i].bs>10000 && e[i].bs<=15000)
       e[i].desg='C';
     else if(e[i].bs>15000 && e[i].bs<=35000)
       e[i].desg='E';
     else if(e[i].bs>35000 && e[i].bs<=60000)
       e[i].desg='M';
     else 
       e[i].desg='G';
   }
   printf("\nEName\tBasic\tDA\tTA\tMA\tHRA\tGross\tPF\tNetSal\tDesg.\n");
  for(i=0;i<n;i++)
  {
     printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%c\n",e[i].nm,e[i].bs,e[i].da,e[i].ta,e[i].ma,e[i].hra,e[i].gs,e[i].pf,e[i].net,e[i].desg);
  }
  //sort data in descending in respect of salary
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-1;j++)
    {
       if(e[j].gs<e[j+1].gs)
       {
         t=e[j];
         e[j]=e[j+1];
         e[j+1]=t;                     
       }                    
    }
  }
  printf("\n-------------------------------------------------------\n");
  for(i=0;i<n;i++)
  {
     printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%c\n",e[i].nm,e[i].bs,e[i].da,e[i].ta,e[i].ma,e[i].hra,e[i].gs,e[i].pf,e[i].net,e[i].desg);
  } 
  getch();
}