//error of strcat
#include<iostream.h>       
#include<stdio.h>          
                          
void xstrcat(char *x,char *y)
 {                      
char *z;                  
                          
	                         
                          
int i;                    
for( i=0;*(x+i)!='\0';i++)  
{                         
	*(z+i)=*(x+i);
	              
					                     
}
for(int j=0;*(y+j)!='\0';j++)
{
	*(z+i)=*(y+j);
	i++;
}   
*(z+i)='\0';                     
puts(z);                  
                          
	                         
     }                     
                          
int main()                 
{                         
char a[10],b[10];         
gets(a);                  
gets(b);                  

xstrcat(a,b);
}

