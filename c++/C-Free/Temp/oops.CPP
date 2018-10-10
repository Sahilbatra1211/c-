#include<iostream.h>
#include<conio.h>

class Student{
	int m1;
   int m2;
   int m3;

   void cal()
   {
   	total = m1+m2+m3;
   }
   protected:
   int total;

   public:

   Student()
   {
   	m1=0;
      m2=0;
      m3=0;
      total=0;
   }

   void getData()
   {
   	cout<<"Enter marks for 3 subs:";
      cin>>m1>>m2>>m3;

      cal();
   }

   void print()
   {
     cout<<"Marks :-\n";
     cout<<m1<<"\n";
	  cout<<m2<<"\n";
	  cout<<m3<<"\n";
	  cout<<"total :"<<total<<"\n";
   }
};

class Report:public Student{
	int avg;
   int perc;

   public:

   Report()
   {
   	avg=0;
      perc=0;
   }

   void cal()
   {
   	avg = total/3;
      perc = (total*100)/300;
   }

	void print()//overrided
   {
      Student::print();
      cout<<"Avg : "<<avg<<"\n";
      cout<<"Percentage :"<<perc<<"\n";
   }
};


void main()
{
	Report obj;
   obj.getData();
   obj.cal();
   obj.print();

   getch();
}

