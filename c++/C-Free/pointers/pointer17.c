#include<stdio.h>
int main()
{
	char c[]="sahil";
	char *ptr;
	ptr=c;  // it stores base adress of strng c
	
	while(*ptr!='\0')
	{
		printf("%c",*ptr);
		ptr++;
	}
	
}
/* another way is 
printf("%s",c);*/