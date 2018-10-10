#include<iostream.h>		//
#include<fstream.h>
int main()
{
	ofstream fout("xyz.txt"); // use this also(,ios::app)constructor, ofstream==outputfile is a class and fout is an object and its name can be changed 
	 
	fout<<"this is some text ";// we are giving text to file mentioned above
	fout.close(); // to ave can
	
	char c[50];
	ifstream fin("xyz.txt"); // we are taking things from file and storing in char c
	while(1)
	{
		fin>>c; // storing values
		
		if(fin.eof()) //eof==end of file it is false everywhere but true at null
		break;
		
		cout<<"-"<<c<<"\n";
		
	} 
fin.close();
}