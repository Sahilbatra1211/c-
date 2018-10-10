#include<iostream.h>
#include<conio.h>
	int cmp(char x[],char y[])
	{	int c= strlen(x);
		int d=strlen(y);
		int i;
		int flag=1;
		
		if(c>d)
	{
		for(i=0;x[i]!='\0';i++)
	{
		if(x[i]!=y[i])
		flag=0;
	}
	}
		if(d>c)
		{
		for(i=0;y[i]!='\0';i++)
	{
		if(x[i]!=y[i])
		flag=0;
	}	}
	return flag;
	
	}
	
	int main()
	{char c[100],b[100];
	gets(c);gets(b);
	if(cmp(c,b))
	cout<<"same";
	else
	cout<<"not same";	}