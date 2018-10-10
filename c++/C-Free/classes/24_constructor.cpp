/*Characteristics of Constructor (Cont..)

->It cannot be inherited (although a derived class constructor can
call a base class constructor).
->Constructors cannot be virtual.
->We cannot refer to their addresses.
->Constructors make implicit call to the operators new and delete
when memory allocation is required.


Constructors with Default Arguments

It is possible to define constructors with default arguments.

Consider example (int a, int b= 0);
The default value of the argument b is zero.

example e1(5);
assigns the value 5 to the variable a and 0 to b.

example e1(5, 3);
assigns the value 5 to the variable a and 3 to b.



example::example(int a=0); //Default Argument Constructor
The default argument constructor can be called with either one
argument or no arguments.
When called with no arguments, it becomes a default
constructor.