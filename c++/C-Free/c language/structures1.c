#include<stdio.h>
struct book
{
char name ;
float price ;
int pages ;
} ;
struct book b1, b2, b3 ;


is same as...

struct book
{
char name ;
float price ;
int pages ;
} b1, b2, b3 ;

is same as...

struct book
{
char name[10] ;
float price ;
int pages ;
} ;
struct book b1 = { "Basic", 130.00, 550 } ;
struct book b2 = { "Physics", 150.80, 800 } ;

It is important to understand that a structure type declaration does not tell the compiler
to reserve any space in memory. All a structure declaration does is, it defines the ‘form’
of the structure

So to refer to pages of the structure defined in our sample program we have to use,
b1.pages