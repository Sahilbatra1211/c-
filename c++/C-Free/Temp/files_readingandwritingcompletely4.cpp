#include<iostream.h>
#include<fstream.h>
int main()
{
	ofstream fout("xyz.txt"); 
	
	char a[]="this is some text1\n"; // we are taking whole array 
	
	fout.write(a,7); // we coulld write in file by using this similar as puts 
	fout.close();

	char c[50];
	ifstream fin2("xyz.txt");
	fin2.read(c,6);
	c[6]='\0';
	puts(c);
	 
	fin2.close();
}
// yaha pr puts ki jagah cout likh skte h?