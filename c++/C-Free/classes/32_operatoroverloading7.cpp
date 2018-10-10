//Discard values of all operands except the
//rightmost, which becomes the result of the comma operation.
#include <iostream>
using namespace std;
 int main()
 { 
 int n = 1;
 int m = (++n, cout << "n = " << n << '\n', ++n, 2*n);
 cout << "m = " << (++m, m) << '\n'; 
 }