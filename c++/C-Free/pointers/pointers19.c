//Suppose we wish to store “Hello”. We may either store it in a string or we may ask the 
//C compiler to store it at some location in memory and assign the address of the string 
//in a char pointer.
#include<stdio.h>
int main()
{
	char *p="hello";
	char p2[]="hello";
	char *p3="sahil";
	char p4[]="sahil";
	//applications of *p
	//we cannot equate two array p2=p3
	p=p3;
	//p2=p4 not valid
	printf("%s",p); //sahil
	printf("%c",*p); //s
	
	//we can overwrite a pointer containing string
	p="sahil";
//	p2[]="sahil" not valid

// we can do p++ but not a++
/* char *p="word";
p++;
puts(p);  
output-ords
*/ 
	
	
}