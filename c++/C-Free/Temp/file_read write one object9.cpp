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
	A obj;
	obj.getData();
	
	ofstream fout("xyz.txt",ios::binary);
	fout.write((char*)&obj,sizeof(A));						
	fout.close();
	
	A objx;													
	ifstream fin("xyz.txt");
	fin.read((char*)&objx,sizeof(A));						
	objx.print();
	fin.close();													
	 
}