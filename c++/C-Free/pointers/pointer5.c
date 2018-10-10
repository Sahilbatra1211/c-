//a pointer can be incremented or decremented 
//assigning adress of array to a pointer
#include<stdio.h>
int main()
{int a[]={3,4,6};
int *p;
p=a;  // only a represent the adress of array

printf("\n%d",*p);
printf("\n%d",*(p+1));
printf("\n%d",*(p+2));
printf("\n%d",*a); 
printf("\n%d",*(a+1)); //array can also be incremented like this 
printf("\n%d\n",*(a+2));
}