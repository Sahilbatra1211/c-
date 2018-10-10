//gdb debugging
1. gcc factorial.c -o factorial  // used to change the name of executable file which is 
									// bydefault ./a.out so we have changed to facorial
2.gcc -g factorial.c -o factorial	// to enable gdb(-g)	./ is to enter into present dir
3.gdb factorial   					// to start gdb. gdb ./a.out was also correct if not rennamed
4.q 								// to quit gdb
5.b  line no/func name like main	//to add breakpoint
6.r									//run
7.l									//list will show some prt of program
8.f									//frame will show at which line u r at
9.n/next							//take u to next line but not enter into the function
10.suppose a variable is declared int a=10;
	write n
	then this line will get executed 
	to check whether a is initialized 10 or not write
	print/p a							//will show a=10
11.s/step 								//to get into a function
12.bt/backtrace							//this will show from which function to which u r entering	
13.info b							// show no of brak points
14. del 1							//this no breakpoint will del
15.continue/c						//takes from one breakpoint to other directly
16. f functions k no bhi show krta h to hum f 2 likh kr second func me jaa skte h
or function no dekhne ki liye bt use kro bt se stack aa jaegi
17.info local     //will show all the local variable in that func/stack