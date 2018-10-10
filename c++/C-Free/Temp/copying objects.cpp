#include<iostream.h>
#include<fstream.h>

class A
{
  int x;
  int y;

  public:

  int getX()
  {
  	return x;
  }
 
  void getData()
  {
  	cout<<"\nEnter 2 values : ";
  	cin>>x>>y;
  }	
\
  void print()
  {
	  cout<<"#"<<x<<","<<y<<"#\n";

  }
};

int main()
{
//	A obj[3];
//	for(int i=0;i<3;i++)
//	{
//		obj[i].getData();
//	}
	
//	ofstream fout("xyz.txt");
//	for(int i=0;i<3;i++)
//	{
//		fout.write((char*)&obj[i],sizeof(A));
//	}
//	fout.close();
	
	
	A objx;
	ifstream fin("xyz.txt",ios::binary);
	ofstream fout2("abc.txt",ios::binary);
	while(1)
	{
	fin.read((char*)&objx,sizeof(A));

	if(fin.eof())
		break;
	fout2.write((char*)&objx,sizeof(A));
	}
	
	fin.close();	
	fout2.close();
	
	ifstream fin2("abc.txt",ios::binary);
	while(1)
	{
	fin2.read((char*)&objx,sizeof(A));

	if(fin2.eof())
		break;
	objx.print();
	}
	fin2.close();
	 
}