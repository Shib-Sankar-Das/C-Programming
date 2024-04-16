//WAP to open a File and read text from it.
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<unistd.h>
void main()
{
  FILE *fp;
  char fna[20],ch;
  printf("Enter the file Name=");
  scanf("%s",&fna);
  fp=fopen(fna,"r");
  if(fp==NULL)
  printf("File Not Found");
  else
  {
    while(1)
    {
      ch=fgetc(fp); 
      printf("%c",ch);  
      sleep(50);
      if(ch==EOF)
        break;                    
     }
  }  
  fclose(fp);
  getch();
}