//application 2-> we  cannot directly equate two arrays strings a=b butt poiters can be equated 
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{ char *p,*d;
  p=new char;
  d=new char;
  cin>>p;
  cin>>d;
  p=d;
  cout<<p<<"\n"<<d;
	
}