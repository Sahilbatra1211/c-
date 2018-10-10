//One can restrict the type of exceptions that a
//function can throw outside of itself.
//To accomplish this, add a throw clause to a function definition.
/*• Only those data types contained in the comma-
separated type-list may be thrown.

• An empty type-list doesn't allow a function to
throw any exceptions.
• Throwing any other type not supported by a
function cause abnormal program termination.
– Standard library function unexpected( ) is called,
which calls abort( ) by default.*/
#include <iostream>
 using namespace std;
 void Xhandler(int test) throw(int, char, double)
 { if(test == 0) throw test;
 if(test == 1) throw 'a';
 if(test == 2) throw 123.23;
 }
 int main()
 { cout << "start\n";
 try{ Xhandler(0); }
 catch(int i) { cout << "Caught an integer\n"; }
 catch(char c) { cout << "Caught char\n"; }
 catch(double d) { cout << "Caught double\n"; }
 cout << "end"; }


