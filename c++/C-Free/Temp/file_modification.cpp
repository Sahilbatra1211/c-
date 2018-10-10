#include<iostream>
#include<fstream>
using namespace std;
class A
{
	int a;
	
	public:
	
	void put()
	{
		cin>>a;
	}
	
 	int get()
 	{
 		return a;
 	}
	 
};
int main()
{
	A obj[3];
	
	fstream file("xyz.txt",ios::out);
	
	for(int i=0;i<3;i++)
	{
		obj[i].put();			
	}
	
	
	for(int i=0;i<3;i++)
	{
		file.write((char*)&obj[i],sizeof(A));			
	}
	
	
	file.close();
	fstream file2("xyz.txt",ios::out);
	file.open("xyz.txt",ios::in);
	A objx;
	cout<<"enter the value ot be modified\n";
	int v;
	cin>>v;
	
	int flag=0;
	
	while(1)
	{
		file.read((char*)&objx,sizeof(A));
		file2.write((char*)&objx,sizeof(A));
			
		
		
		if(file.eof())
		{
			break;
		}
		
		if(objx.get()==v)
		{
			flag=1;
			int pos=file.tellg()-sizeof(A);
			file2.seekp(pos);
			cout<<"enter the value to be stored";
			objx.put();
			
			file2.write((char*)&objx,sizeof(A));
			
		}
	}
	
	
	
	

}
