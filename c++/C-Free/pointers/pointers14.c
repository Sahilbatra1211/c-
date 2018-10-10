// we can use pointers similar to arrray using c[i] and we do not need to *

#include<iostream.h>
int main()
{
	char a[10];
	
	gets(a);
	char *c;
	c=a;
	for(int i=0;c[i]!='\0';i++)
	{
		cout<<c[i];
	}
}