#include<iostream.h>
#include<fstream.h>
int main()
{
	ofstream fout("xyz.txt",ios::app); // use this also(,ios::ate) in this previous data wull not be locked 
	 
	fout<<"this is some text ";
	fout.close(); 
	
	char c[50];
	ifstream fin("xyz.txt");
	while(1)
	{
		fin>>c; 
		
		if(fin.eof())
		break;
		
		cout<<"-"<<c<<"\n";
		
	} 
fin.close();
}