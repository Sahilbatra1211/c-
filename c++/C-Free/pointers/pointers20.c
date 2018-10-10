//len1 = strlen ( arr ) ;
//len2 = strlen ( "Humpty Dumpty" ) ;
#include<stdio.h>
void xstrelen(char *p)
{
	int i=0;
	while(*p!='\0')
	{
		i++;
		p++;
	}
	printf("%d",i);
}


int main()
{
	char c[100];
	gets(c);
	
	xstrelen(c);
}