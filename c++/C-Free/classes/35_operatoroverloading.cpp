#include<iostream>
 using namespace std;
 class A
 { int a[3];
 public:
 A(int p, int q, int r)
 { 
 a[0] = p; a[1] = q; a[2] = r;
  }
 int & operator[](int i)                 // its imp to return refrence 
 { 
 	if(i < 0 || i > 2)
 	{ cout << "Error\n"; exit(1); }
 	return a[i]; 
 	} 
 };

 int main()
 { A obj(4,7,12);
 cout << obj[2] << " ";
 obj[2] = 10;
 cout << obj[2];
 return 0; }