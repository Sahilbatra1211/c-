#include <iostream>

using namespace std;

void staticfunc()
{
     int a=10;
    int b=2;
    cout<<a<<b<<"\n";
    a++;
    b++;
}
int main() {
	
	for(int i=0;i<5;i++)
	staticfunc();
}
// output will be 10 2 11 2 12 2 13 2 14 2

