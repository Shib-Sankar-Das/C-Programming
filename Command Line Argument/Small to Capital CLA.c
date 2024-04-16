//wap to convert Word into capital letter.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(int argc, char* argv[])//argc=4
{
 int i;
 char str[80];
 if(argc==3)//4==3
 {
 
  strcpy(str,argv[1]);//str=""
  for(i=0;str[i]!='\0';i++)//\0!='\0'  i=4
  { 
    if(str[i]>=97 && str[i]<=122)
      str[i]=str[i]-32;
   }
   printf("\nold word=%s",argv[1]);
   printf("\nNew word=%s",str);
 }
 else
   printf("\nIncorrect argument number!");
 getch();
}