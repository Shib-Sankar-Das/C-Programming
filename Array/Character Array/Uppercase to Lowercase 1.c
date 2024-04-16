// WAP to convert to uppercase to lowercase with out using SDF (System Defined Function).

#include<stdio.h>
#include<conio.h>
void main()
{
     char x[100];
     int i;
     printf("Enter the String = ");
     gets(x);
     printf("The string = %s\n",x);
     for(i=0;x[i]!='\0';i++)
     {
      if(x[i]>=65 && x[i]<=90)
       x[i]=x[i]+32;
      }
      printf("The string in capital = %s\n",x);
      getch();
}
