//how to know if a number is a power of 2?
//method 1 is to check the  log to the base 2 of that number if the no is an integer then it has only multiples of two
//method 2- Another solution is to keep dividing the number by two, i.e, do n = n/2 iteratively. In any iteration, if n%2 becomes non-zero and n is not 1 then n is not a power of 2. If n becomes 1 then it is a power of 2.
//method 3- If we subtract a power of 2 numbers by 1 then all unset bits after the only set bit become set; and the set bit become unset.

//For example for 4 ( 100) and 16(10000), we get following after subtracting 1
//3–> 011
//15 –> 01111

//So, if a number n is a power of 2 then bitwise & of n and n-1 will be zero. We can say n is a power of 2 or not based on value of n&(n-1). The expression n&(n-1) will not work when n is 0. To handle this case also, our expression will become n& (!n&(n-1)) (thanks to Mohammad for adding this case).
//Below is the implementation of this method.
#include<iostream>
using namespace std;

bool isapoweroftwo(int x)
{
	return (!(x&(x-1)));// if someone puts 0 then this method will be wrong so for that x & (!(x&(x-1)))
}

int main()
{	int x;
	cin>>x;
	if(isapoweroftwo(x))
	cout<<"power of two";
	else
	cout<<"not a power of two";
}
