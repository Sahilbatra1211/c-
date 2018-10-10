//its a pre processor and before compiling age changes to 10
//typdef is used to name data types only while #define give alais
#include <stdio.h>

#define tech "TechOnTheNet.com"  //no semicolon's
#define AGE 10
#define one 3+7
#define two (3+7)    //parenthesis should be put
int main()
{
   printf("%s is over %d years old.\n", tech, AGE);
   
   
   printf("%d",one);
   printf("\n%d",two);
    
   return 0;
}
