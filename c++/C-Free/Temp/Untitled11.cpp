#include<iostream.h>
#include<string.h>
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   char *a;
    char *b;
    
    scanf("%s",a);
    scanf("%s",b);
    int i;
    for(i=0;*a='\0';i++)
    {
        a++;
    }
    char *c;
    for(int j=0;j!=i/2;j++)
    {
        *c=*a;
    }
    
   b++;
   char *p;
  strcpy(c,b);
    
    puts(p);
        
    
    
        
    
    
    
    
    return 0;
}
