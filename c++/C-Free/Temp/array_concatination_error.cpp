#include<iostream.h>
int main()
{
int i,j;
char a[100];
char b[100];
char c[100];
gets(a);
gets(b);
for ( i=0;a[i]!='\0';i++)
{
	c[i]=a[i];
}
for( j=0;b[j]!='\0';j++)
{
	c[i+j]=b[j];
}
c[i+j]='\0';
puts(c);
}
// 2 [)o
abc+efje
abcefj