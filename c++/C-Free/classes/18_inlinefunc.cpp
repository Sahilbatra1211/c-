//if a normal function is called then the function call is stored on the STACK and when the function execution is over then the STACK is cleared.

but if you use inline you will not (actually the compiler) allocate a STACK memory frame because there are no function calls……,this explains the actual thing about using inline-your compiler only replaces that code block whenever you call that function. it simply rewrites the code there and executes the program….,

Advantage of Inline Functions : They save on overheads of a function call as it's not invoked, rather its code is replaced in the program.

Disadvantage of Inline Functions : With more function calls (for ex: in a loop), the repeated occurrences of same function code wastes memory space.

ex- all the functions defiened inside the class are by default inline but if we define them outside the class we have to mention the word inline 

syntax:

class A
{
	public:
	void outsideclass(); // declaration


};

inline void A::outsideclass()  // inline written over here is not compulsory
{
	//definition
}


