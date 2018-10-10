//convert a no into binary using recursion
#include<iostream>
using namespace std;

void func(int n)
{
	if(n==0)
	return ;
	
	func(n/2);
	printf("%d",n%2);
	
	
}
int main()
{
	func(16);
}