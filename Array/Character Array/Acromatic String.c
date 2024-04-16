/*
WAP to print the acromatic string.
Input --> Shib Sankar Das
Output --> S.S.D
*/

#include<stdio.h>
#include<conio.h>
void main()
{
     char x[10];
     int i;
     printf("Enter the String = ");
     gets(x);
     if(x[0]>=97 && x[0]<=122)
      printf("%c.",x[0]-32);
     else
      printf("%c.",x[0]);
     for(i=1;x[i]!='\0';i++)
     {
       if(x[i]==' ')
       {
        if(x[i+1]>='a' && x[i+1]<='z')
         printf("%c.",x[i+1]-32);
        else
         printf("%c.",x[i+1]);
       }
     }
     getch();
}