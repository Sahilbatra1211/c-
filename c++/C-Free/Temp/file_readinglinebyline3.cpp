#include<iostream.h>
#include<fstream.h>
int main()
{
	ofstream fout("xyz.txt"); 
	fout<<"this is some text 1\n"; 
	fout<<"this is some text 2\n";
	fout<<"this is some text 3\n";
	
	
	fout.close();

	char c[50];
	ifstream fin2("xyz.txt");
	while(fin2.getline(c,30))
	{	
		cout<<c<<"\n";
		
	}
	cout<<"\n";
	 
	fin2.close();
}