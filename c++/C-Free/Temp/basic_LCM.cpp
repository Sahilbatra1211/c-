//lcm of two no
#include<iostream.h>
#include<conio.h>

int main()
{ int a,b;

	cout<<"entter two no's";
	cin>>a>>b;
	
for(int i=a;;i=i+a)
{
	if(i%b==0)
	{
		cout<<"LCM"<<i;
	break;
	}
}
}