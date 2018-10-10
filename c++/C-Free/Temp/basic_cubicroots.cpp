//calculation of roots of cubic equation
#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{	float a,b,c,d;
	cout<<"let eqn of type ax^3 + bx^2+cx +d=0";
	cout<<"\n write a,b,c,d";
	cin>>a>>b>>c>>d;
	
	int D;
	D=4*pow(b,2)-12*a*c;
	
	if(D>=0)
	{
		float f,g;
		f=(-b+sqrt(D))/(2*a);
		g=(-b-sqrt(D))/(2*a);
		
		if((a*pow(f,3)+b*pow(f,2)+c*f+d)*(a*pow(g,3)+b*pow(g,2)+c*g+d)<=0)
		{
			cout<<"the given equation has three real roots";
		}
		
	}
	if(D<0)
	{
		cout<<"the given equation can have atmost one real root";
	}
	
	int z=0;
	for(float i=-10000000;i<1000000;i++)
	{
		if(a*pow(i,3)+b*pow(i,2)+c*pow(i,1)+d==0)
		{
			cout<<"\nroots are ="<<i;
			cout<<"\n";
			z=1;
		}
	}
	if(z==0)
	{
		cout<<"\nmaybe roots are really large or no real roots";
	}
	
}