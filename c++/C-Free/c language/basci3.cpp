//roots of quadritic equation
#include<stdio.h>
#include<math.h>
 int main()
 {
 	int a,b,c,D;
 	float x1,x2;
 	
 	printf("writte a");
 	scanf("%d",&a);
 	
 	printf("writte b");
 	scanf("%d",&b);

	printf("writte c");
 	scanf("%d",&c);
 	
 	D=b*b-4*a*c;
 	
 	if(D==0)
 	{
	 	printf("roots are");
	 	x1=-b/(2*a);
	 	x2=-b/(2*a);
	 	printf("x1=%f,x2=%f=",x1,x2);
	 }
	 if(D<0)
	 {
 		printf("no real roots");
 	}
 	if(D>0)
 	{
	 	x1=(-b/2*a+sqrt(D))/(2*a);
	 	x1=(-b/2*a-sqrt(D))/(2*a);
 		printf("x1=%f,x2=%f=",x1,x2);
	 }

 	
 }