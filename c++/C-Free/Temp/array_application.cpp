// THIS IS IT -> HTSI SI TI
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
	char a[100];
	cout<<"enter the line";
	int temp;
	gets(a);
	
	
	for(int j=0;a[j]!='\0'; j=j+2)
	{
		if(a[j]==' ')
		{
			j++;
		}
		else if(a[j]=='\0')
		{
			break;
			
		}
		else if(a[j+1]==' ')
		{
			j++;
		}
		else{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
		
		
	}
	cout<<"\n";
	puts(a);
} 