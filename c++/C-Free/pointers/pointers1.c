#include<stdio.h>
int main()
{
	int a=5;
	int *p;
	p=&a;
	
	printf("adress of pointer:%d",&p);
	printf("\nadress of variable that is stored:%d",p);
	printf("\nadress of variable that is stored:%d",*(&p));
	printf("\nvariable itself:%d",*p);
	
	*(p++);  //if we incremented the value of pointer it will also increment the value of var a 
	printf("\nvalue of a after ncrementation:%d",a);
	
}