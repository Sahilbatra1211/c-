#include<iostream.h>
#include<fstream.h>
int main()
{
	ofstream fout("xyz.txt"); 
	fout<<"this is some text\n";
	
	
	fout.close();
	
	char c;

	ifstream fin2("xyz.txt");
	while(fin2.get(c))
	{

		
		cout<<c<<"\n";
		
	}
	cout<<"\n";
	 
fin2.close();
}