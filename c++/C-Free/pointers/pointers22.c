//strcmp functionp-> gives value in boolean
// and shows 0 if matches else shows any other valure which is reverse of actual alue
//1) 0 is false rest everything is true always
#include<stdio.h>
int main()
{
	char a1[]="hello";
	char a2[]="hello";
	char a3[]="sahil";
	
	printf("%d",strcmp(a1,a2)); // 0
	printf("%d",strcmp(a1,a3));	// any other value other than 0
}