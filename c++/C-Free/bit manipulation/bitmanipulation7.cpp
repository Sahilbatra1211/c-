// a + b = a ^ b + 2 * (a & b)
//if (a&b)=0 then a^b=a+b
//suppose a=12 // 1100
//now b could be 0011 or 0010 or 0000 or 0001 to make a&b==0 
//so 2*pow(no of 0 bits ) would give the number where a+b=a^b
#include<iostream>
using namespace std;

int countValues(int n)
{
    // unset_bits keeps track of count of un-set
    // bits in binary representation of n
    int unset_bits=0;
    while (n)
    {
        if ((n & 1) == 0)
            unset_bits++;
        n=n>>1;
    }
 
    // Return 2 ^ unset_bits
    return 1 << unset_bits;
}
int main()
{
    int n = 12;
    cout << countValues(n);
    return 0;
}
