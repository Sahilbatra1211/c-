#include<iostream.h>
#include<fstream.h>
int main()
{
	ofstream fout("xyz.txt");
	cout<<"this is some text";
	 

	fout.close(); 
	
	char c[50];
	ifstream fin("xyz.txt");
	fin.seekg(8);
	cout<<"\npos"<<fin.tellg()<<"\n";
	fin>>c;				
	puts(c);
	cout<<"\npos"<<fin.tellg()<<"\n";
	fin.close();
	while(1)
	{
		fin>>c; 
		
		if(fin.eof())
		break;
		
		cout<<"-"<<c<<"\n";
		
	} 
fin.close();
}
//output
//pos;8
//some
//pos:12
	