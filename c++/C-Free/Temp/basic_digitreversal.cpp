// 521 -> 125
#include<iostream.h>
#include<conio.h>
#include<math.h>

int main()
{int d,c=0,a,b,i;
cout<<"enter no";
cin>>a;
d=a;
for( i=0;d!=0;i++) 
	{
		d=d/10;
	}
for(int j=1;i-j>=0 ;j++)
{
	c+=(a%10)*(pow(10,(i-j)));
	a=a/10;
}
cout<<"no is"<<"\n"<<c<<"\n";	
}