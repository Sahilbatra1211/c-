// This program will not input second char

#include<stdio.h>

int main(){
char a,b;
int i;
printf("Demo program for input character\n");
printf("Please enter a character = ");
scanf("%c",&a);
printf("you have entered = %c\n",a);

printf("Please enter a character = ");
scanf("% c",&b);    //space is required
printf("you have entered = %c\n",b);

}
