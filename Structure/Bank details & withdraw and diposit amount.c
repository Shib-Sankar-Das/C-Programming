//WAP to create Bank details & withdraw and diposit amount using structure.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Bank
{
  char nm[10];
  int accno,balance;     
};
struct Bank b[2];
void main()
{
  int i,n,ch,accountno,dep,f=0,wdn;
  printf("Enter the Range = ");
  scanf("%d",&n);
  //input
  for(i=0;i<n;i++)
  {
     printf("Enter the Name = ");
     scanf("%s",&b[i].nm);                
     printf("Enter the Acc. No.  = ");
     scanf("%d",&b[i].accno);
     printf("Enter the Balance  = ");
     scanf("%d",&b[i].balance);
  }
  printf("-------------------------------------------------\n");
  printf("Name\tAccNo\tBalance\n");
  printf("-------------------------------------------------\n");
  for(i=0;i<n;i++)
  {
     printf("%s\t%d\t%d\n",b[i].nm,b[i].accno,b[i].balance);                
  }
  
  while(1)//for(;;)
  {
    printf("Press 0 for Deposit\nPress 1 for Withdraw\n");
    printf("Enter your Choice = ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 0:
           printf("Enter the Account No. = ");
           scanf("%d",&accountno);
           printf("Enter the Deposit Amount = ");
           scanf("%d",&dep);
           f=0;
           for(i=0;i<n;i++)
           {
             if(accountno==b[i].accno)
             {
               b[i].balance=b[i].balance+dep;                
               f=1;
             }
           }       
           if(f==0)
           {
            printf("Account No. Does not exist\n");   
            break;
            }
           for(i=0;i<n;i++)
           {
             if(accountno==b[i].accno)
               printf("\n%s\t%d\t%d\n",b[i].nm,b[i].accno,b[i].balance);
           }
           break;
           case 1:
           printf("Enter the Account No. = ");
           scanf("%d",&accountno);
           printf("Enter the Withdrawn Amount = ");
           scanf("%d",&wdn);
           f=0;
           for(i=0;i<n;i++)
           {
             if(accountno==b[i].accno)
             {
                if(b[i].balance-wdn>=1000)
                {
                 b[i].balance=b[i].balance-wdn;
                }
                else
                 printf("Balance must be more than 1000\n");
               f=1;
             }
           }       
           if(f==0)
           {
            printf("Account No. Does not exist\n");   
            break;
            }
           for(i=0;i<n;i++)
           {
             if(accountno==b[i].accno)
               printf("\n%s\t%d\t%d\n",b[i].nm,b[i].accno,b[i].balance);
           }
           break;                
         default:
                 exit(0);
    }
  }
  getch();
}