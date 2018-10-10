#include<iostream.h>
#include<fstream.h>
int main()
{
	ofstream fout;			
	ifstream fin;
	fout.open("xyz.txt"); 
	fout<<"this is some text 1\n"; 
	fout.close();
	
 	fin.open("xyz.txt");
	fout.open("abc.txt");
	
	char c;
	while(fin.get(c))
	{
		fout<<c;
	}
	fin.close();
	
	fin.open("abc.txt");
	while(fin.get(c))
	{
		cout<<c;
	}
	fin.close();
	fout.close();
	cout<<"\n";
}