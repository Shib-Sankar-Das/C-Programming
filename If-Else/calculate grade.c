//WAP to calculate grade

#include<stdio.h>
#include<conio.h>
void main()
{
	float ch,p,m,b,t,a;
	printf("Enter marks of 4 subjects = ");
	scanf("%f%f%f%f",&ch,&p,&m,&b);
	t=ch+p+m+b;
	a=t/4;
	printf("Total = %f Avarage = %f\n",t,a);
	if(a>=0 && a<=30)
	printf("Your gread is D");
	else if(a>30 && a<=60)
	printf("Your gread is C");
	else if(a>60 && a<=80)
	printf("Your gread is B");
	else
	printf("Your gread is A");
	getch();
}