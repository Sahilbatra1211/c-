#include <iostream>
#include <vector>

using namespace std;

int main()
{
	
	vector<int> myvector;  // dynamic array
	myvector.push_back(3); // used to add some values to array
	myvector.push_back(4);
	
	for(unsigned int i=0; i<myvector.size();i++)
	{
		cout<<myvector[i]<<endl; // us eto cout array myvector.at(i) can also be used
	}
	
	myvector.insert(myvector.begin()+1,5); // to add a vector in between	
		
	for(unsigned int i=0; i<myvector.size();i++)
	{
		cout<<myvector[i]<<endl; // us eto cout array myvector.at(i) can also be used
	}
	
	myvector.erase(myvector.begin()+1);
		for(unsigned int i=0; i<myvector.size();i++)
	{
		cout<<myvector[i]<<endl; // us eto cout array myvector.at(i) can also be used
	}
}