#include<iostream.h>
#include<fstream.h>
int main()
{
	ofstream fout("xyz.txt");
	fout.seekp(4); //use to change the position of cursor
	fout<<"xyz";
	cout<<"\n pos:"<<fout.tellp()<<"\n"; //will tell the position of cursor
	 

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
//error