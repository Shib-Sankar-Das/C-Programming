//WAP to create a employee data set in file & read.
#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *fp;
char nm[10],employee_id[10];
int i,n,basic_sal,DA,HRA,TA,PF,Gross_sal,Net_sal;
char fna[10];
printf("Enter the File name=");
scanf("%s",&fna);
fp=fopen(fna,"a");
printf("Enter the range =");
scanf("%d",&n);
if(fp==NULL)
 printf("NOT FOUND");
else
{
  for(i=1;i<=n;i++)
   {
     printf("Enter the name=");
     scanf("%s",&nm);
     fprintf(fp,"%s\t",nm);
     printf("Enter the employee ID=");
     scanf("%s",&employee_id);
     fprintf(fp,"%s\t",employee_id);
     printf("Enter the basic salary=");
     scanf("%d",&basic_sal);
     fprintf(fp,"%d\t",basic_sal);
     DA=(basic_sal*20)/100;
     fprintf(fp,"%d\t",DA);
     HRA=(basic_sal*15)/100;
     fprintf(fp,"%d\t",HRA);
    TA=(basic_sal*15)/100;
    fprintf(fp,"%d\t",TA);
    Gross_sal=basic_sal+DA+TA+HRA;
    fprintf(fp,"%d\t",Gross_sal);
    PF=(basic_sal*25)/100;
    fprintf(fp,"%d\t",PF);
    Net_sal=Gross_sal-PF;
    fprintf(fp,"%d\n",Net_sal);
   }
  }
 fclose(fp);
getch();
}