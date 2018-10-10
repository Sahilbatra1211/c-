 #include<iostream.h>

class A{
	//if we had made it private then we cant use it directly ie. A::count;
  
  public:
  static int count;		// it is a global variable which can also be used wiythoud making an object outside the class
  char name[50];
  
  A(char x[])
  {	
 	count++;
 	strcpy(name,x);
 	puts(name);
  	cout<<"constructor called, object count= "<<count<<"\n";
  	
  }	
~A()
{	count--; //count is a global variable so the initial value here will be the value incremented above and the changes we make are changed globally
	puts(name);
	cout<<"destructor called, object count="<<count<<"\n";  //destructor will run at the end of the the program . used to free memory at the end.
	
}		
static void printcount()
{
	//puts(name)		member variable cant be used in static function	
	cout<<"total count"<<count<<"\n";
}
};
int A::count=0; // we are initialising static variable here.  

int main()
{
	A obj1("X"),obj2("y"),obj3("z"); //if we obj1.m1=1, obj2.m1=2 then m1 has different  valuie for diff objects but if we
										// do ob1.count=1,obj2.count=3 then 3 will also be put in obj1 as static is like global variable
	
	// now the static count variable can be accessed in any of the given ways-
	 cout<<"\n total count="<<obj1.count<<"\n";
	 cout<<"\n total count="<<obj2.count<<"\n";
	 cout<<"\n total count="<<obj3.count<<"\n";
	 cout<<"\n total count="<<A::count<<"\n";
	 obj1.printcount(); // we can also access the fuction
	 A::printcount();	 
}
// in this program we have used static variable which act as a global variable.if we hadnt use the static variable the count wouldnt have increased then count would act as different variable for different object of the class. 