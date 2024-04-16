//WAP to open a File and enter some text and the read text from it.

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<unistd.h>
void main()
{
  FILE *fp;
  char fna[20],ch;
   printf("Enter the file Name=");
   scanf("%s",fna);
   fp=fopen(fna,"w");
   if(fp==NULL)
       printf("Not Found");
   else
    {
      printf("Enter the Content=\n");
      while(1)
        {
          scanf("%c",&ch);
          if(ch=='@') 
                break;
         else
             fputc(ch,fp); 
         }  
    }
fclose(fp);
printf("File reading");
sleep(100);
printf("........");
fp=fopen(fna,"r");
 while(1)
  {
     ch=fgetc(fp);
     if(ch==EOF)
           break;  
     sleep(100);
     printf("%c",ch);
  }    
fclose(fp);
getch();
}