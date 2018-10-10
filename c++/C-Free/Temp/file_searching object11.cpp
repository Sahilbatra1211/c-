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
	A obj[3];
	for(int i=0;i<3;i++)
	{
		obj[i].getData();
	}
	
	ofstream fout("xyz.txt");
	for(int i=0;i<3;i++)
	{
		fout.write((char*)&obj[i],sizeof(A));
	}
	fout.close();
	
	int val;
	cout<<"\nEnter the value of x to find :";
	cin>>val;

	int flag=0;	
	
	A objx;
	ifstream fin("xyz.txt");
	while(1)
	{
	fin.read((char*)&objx,sizeof(A));

	if(fin.eof())
		break;

	if(objx.getX()==val)				//?
	{flag=1;
	 objx.print();
	 break;
	}
	}
	
	fin.close();	
	
	if(flag==0)
		cout<<"Object not found\n";
	 
}