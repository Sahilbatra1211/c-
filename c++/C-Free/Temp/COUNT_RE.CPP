#include<fstream.h>
#include<conio.h>
#include<iostream.h>
class abc
{
char name[20];
int marks;
int roll;
public:
void getdata()
{
cout<<" enter name:\t";
gets(name);
cout<<"enter marks:\t";
cin>>marks;
cout<<"enter roll:\t";
cin>>roll;
}
void putdata()
{
cout<<"roll no of student is:\t"<<roll<<endl;
cout<<"name of student is:\t";puts(name);cout<<endl;
cout<<"marks of student are:\t"<<marks<<endl;
}
};

void main()
{

ofstream fout("stu.dat",ios::binary);
ifstream fin("stu.dat",ios::binary);
abc a;
int count=0;
char ch='y';
while(ch=='y'||ch=='Y')
{
cout<<"enter data:"<<endl;
a.getdata();
fout.write((char*)&a,sizeof(a));
cout<<"want to enter more?(y/n)";
cin>>ch;
}
fout.close();
while(fin.read((char*)&a,sizeof(a)))
{
a.putdata();
cout<<endl;
count++;
}
fin.close();
cout<<"\nno. of records present are:"<<count;
getch();
}
