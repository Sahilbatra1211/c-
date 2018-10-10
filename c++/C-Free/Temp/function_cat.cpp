#include<iostream.h>
#include<conio.h>

char* cat(char x[], char y[])
{int i;int j;
	char *z=new char[200];
	for( i=0;x[i]!='\0';i++)
	{
		z[i]=x[i];
	}
for( j=0; y[j]!='\0';j++)
{
	z[i+j]=y[j];

}
z[i+j]='\0';
return z;}

 int main()
 {
 	char a[100],b[100];
 	gets(a);gets(b);
 	char *c=cat(a,b);
  puts(c);
  }