#include<iostream.h>
#include<conio.h>
void sum(int x,int y)
{

   cout<<"Sum 1: "<<(x+y)<<"\n";

}

void sum(double x,double y)
{

   cout<<"Sum 2: "<<(x+y)<<"\n";

}

void sum(double x,double y,double z)
{

   cout<<"Sum 3: "<<(x+y+z)<<"\n";

}

void main()
{

    sum(2,3);
    sum(2.2,3.3);
    sum(2,3.3,4.4);

    getch();
}