#include<iostream.h>
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   char *a;
    char *b;
    
    scanf("%ms",&a);
    scanf("%ms",&b);
    int i;
    char *d=a;
    for(i=0;*d='\0';i++)
    {
        d++;
    }
    char *c;
    for(int j=0;j!=i/2+1;j++)
    {
        *c=*a;
        a++;
        
        
    }
    char *e=c;
    
    
   b++;
    printf("%s",e);
 
    
    
    printf("%s",strcat(e,b));
        
    
    
        
    
    
    
    
    return 0;
}