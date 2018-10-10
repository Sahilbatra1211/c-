
/*         ^^^^^^ Program for BINARY FILE HANDLING ^^^^^

  " ****** Central Bureau of Investigation  ****** "*/

// ---------------------------
// HEADER FILES INCLUDED ARE:-
// ---------------------------

#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


/* ----------------------------
DEFINITION OF CLASS- "CRIMINAL"
------------------------------- */

class criminal
{

  private:
    // ---------------------
    // Private data members
    //-----------------------

    int cno, cellno, age;
    char name[25];
    char sex;
    char offence[30];
    char imark[60];
    char victim[25];

  public:
    // -----------------------------------
    // Public member functions declaration
    // -----------------------------------


    // Function decleration to enter the records from the user
    void getdata();


    // Function decleration to display the records
    void showdata();



    // Function to make indirect use of private data member:-cno
    int retcno()
    {
      return cno;
    }    // end of function



    // Function to make indirect use of private data member:-cellno
    int retcellno()
    {
      return cellno;
    }    // end of function



    // Function to make indirect use of private data member:-name
    char *retname()
    {
      return name;
    }    // end of function



    //Function to display the list of all the prisoners
    void entry ();



    // The functions for modifying different categories of a particular record
    void modcno()
    {
      cout<<"\n Enter the new criminal code = ";
      cin>>cno;
    }


    void modcellno()
    {
      cout<<"\n Enter the new cell number= ";
      cin>>cellno;
    }


    void modage()
    {
      cout<<"\n Enter the new age= ";
     cin>>age;
    }




    void modname()
    {
      cout<<"\n Enter the new name= ";
      gets(name);
    }



    void modsex()
    {
      cout<<"\n Enter the sex(M/F)= ";
      cin>>sex;
    }



    void modoffence()
    {
      cout<<"\n Enter the new offence= ";
      gets(offence);
    }



    void modimark()
    {
      cout<<"\n Enter the new identification mark= ";
      gets(imark);
    }



    void modvictim()
    {
      cout<<"\n Enter the new name of the victim= ";
      gets(victim);
    }

}c;   // 'c' is declared as the object of class- 'criminal'
//------------------------
//End of class definition
//------------------------












//--------------------------------------------------------
// Function definition to enter the records from the user
//--------------------------------------------------------

void criminal :: getdata ()
{
  getch();
  clrscr();
  cout<<"\n\t=============================================== ";
  cout<<"\n\t                  OXFORD PRISON ";
  cout<<"\n\t===============================================";

  cout<<"\n Enter the following details to be recorded :- ";
  cout<<"\n Criminal Code = ";
  cin>>cno;
  cout<<"\n Cell Number = ";
  cin>>cellno;
  cout<<"\n Criminal Name = ";
  gets(name);
  cout<<"\n Sex (M/F) = ";
  cin>>sex;
  cout<<"\n Age = ";
  cin>>age;
  cout<<"\n Offence = ";
  gets(offence);
  cout<<"\n Identification Mark = ";
  gets(imark);
  cout<<"\n Name of Victim = " ;
  gets(victim);
} // end of function-getdata


//---------------------------------------------------------
// Function decleration to enter the records from the user
//---------------------------------------------------------

void criminal :: showdata()
{
  getch();
  clrscr();
  cout<<"\n\t=============================================== ";
  cout<<"\n\t               OXFORD PRISON ";
  cout<<"\n\t===============================================";

  cout<<"\n The details of criminal code."<<cno<<" are : ";
  cout<<"\n Cell Number = ";
  cout<<cellno;
  cout<<"\n Criminal Name = ";
  puts(name);
  cout<<" Sex = ";
  cout<<sex;
  cout<<"\n Age = ";
  cout<<age;
  cout<<"\n Offence = ";
  puts(offence);
  cout<<" Identification Mark = ";
  puts(imark);
  cout<<" Name of Victim = ";
  puts(victim);
} // end of function - showdata()


/* Function to display the criminal no., cell no., and name of
   all the criminals in the prison */

void criminal :: entry()
{
  getch();
  clrscr();

  cout<<"\n           **---------**-----------**---------** ";
  cout<<"\n           ** Central Bureau of Investigation ** ";
  cout<<"\n           **---------**-----------**---------** "<<endl;

  cout<<"\n\t=============================================== ";
  cout<<"\n\t                 OXFORD PRISON ";
  cout<<"\n\t===============================================";

  fstream fill;
  fill.open("CBI.DAT",ios::binary|ios::in);

  cout<<"\n";
  cout<<"\n     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
  cout<<"\n      CRIMINAL NO.  \t  CELL NO.   \t  CRIMINAL NAME";
  cout<<"\n     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

  while(fill.read((char *)&c, sizeof(c)))
  {
   cout<<"\n        "<<c.retcno()<<".";
   cout<<"                  "<<c.retcellno();
   cout<<"             "<<c.retname();
   cout<<"\n";
  }    //END OF WHILE LOOP

  fill.close();
}   //END OF FUNCTION- ENTRY


// -------------------------------------------
// Function to enter the records in the file
// -------------------------------------------

void enter()
{
  getch();
  clrscr();
  ofstream fout; // object of ofstream class
  fout.open("CBI.DAT",ios::app|ios::binary);    // opening the file "CBI.dat"
  char ans;
  do
  {
    c.getdata();
    fout.write((char*)&c,sizeof(c));
    cout<<"\n Do you want to enter more records (Y/N) ? =  ";
    cin>>ans;
  }while(ans=='y'||ans=='Y');   //end of do...while loop

  fout.close();  // closing file
} // end of function - enter()


//-----------------------------------------------
// Function to display the records from the file
//-----------------------------------------------

void disp()
{
  getch();
  clrscr();

  ifstream fin;   //creating object of ifstream class
  fin.open("CBI.DAT",ios::in|ios::binary);    // opening the file "CBI.dat"

  if (!fin.eof())
  {
    while(fin.read((char*)&c,sizeof(c)))
     c.showdata();
  }    //end of if

  else
  cout<<"\n File is empty!! No record exists. " ;

  fin.close();  // Closing file
} // End of function - disp()


//------------------------------------------
// Function to delete a record from the file
//------------------------------------------

void del()
{

  clrscr();
  char ans;

  fstream abc;   //creating objects of fstream class
  abc.open("CBI.DAT",ios::binary|ios::in);  // opening the file "CBI.DAT"

  ofstream fout;
  fout.open("TEMP.DAT",ios::binary|ios::out);  // opening the file "TEMP.DAT"

  int crimno;

  cout<<"\n Enter the criminal number whose details to be deleted = ";
  cin>>crimno;


  long p;
  int f=0;
  while (abc.read((char*)&c,sizeof(c)))
  {
    if(c.retcno()!=crimno)
    {
      f=1;
      fout.write((char *)&c,sizeof(c));
    }   //End of if

  }    //End of while loop

  remove("CBI.DAT");      //removing file CBI.DAT
  rename("TEMP.DAT","CBI.DAT");    //renaming the file TEMP.DAT to CBI.DAT

  if(f==0)
    cout<<"\n Sorry! Record not found.";

  else
    cout<<"\n Record Deleted!! ";

  abc.close();   // closing file
  fout.close();   // closing file


  // Syntax for displaying the new records
  cout<<"\n Do you want to see new records (Y/N) ? = ";
  cin>>ans;

  if(ans=='y'||ans=='Y')
  disp();

} // End of function-del()


//------------------------------------------
// Function to search a record from the file
//------------------------------------------

void search()
{
  getch();
  clrscr();
  int crimno,found=0;
  cout<<"\n Enter the criminal number to search the details = ";
  cin>>crimno;

  fstream fil;  // creating object of fstream class
  fil.open("CBI.DAT",ios::binary|ios::in|ios::out);  // opening the file "CBI.dat"

  while ( fil.read((char*)&c,sizeof(c)))
    if(c.retcno()==crimno)
    {
      c.showdata();
      found=1;
    }   //end of if

  if(found!=1)
  cout<<"\n Sorry! Record not found . ";

  fil.close();   // closing file
}  // End of function search()


//------------------------------------------
// Function to modify a record from the file
//------------------------------------------

void modify()
{
  getch();
  clrscr();

  char ans;

  fstream fil;
  fil.open("CBI.dat",ios::binary|ios::in|ios::out); // opening the file "CBI.dat"

  int ch,found=0;
  int cnumber;

  cout<<"\n Enter the criminal code whose record is to be modified = ";
  cin>>cnumber;

  while(fil.read((char*)&c,sizeof(c)))
  {
    if(c.retcno()==cnumber)
    {
      found++;
      do
      {
	cout<<"\n What do you want to modify ? ";
	cout<<"\n 1. Criminal code.";
	cout<<"\n 2. Cell number.";
	cout<<"\n 3. Age.";
	cout<<"\n 4. Name.";
	cout<<"\n 5. Sex.";
	cout<<"\n 6. Offence.";
	cout<<"\n 7. Identification Mark.";
	cout<<"\n 8. Name of victim.";

	cout<<"\n Enter your choice= ";
	cin>>ch;
	if(ch==1)
	c.modcno();
	else if(ch==2)
	c.modcellno();
	else if(ch==3)
	c.modage();
	else if(ch==4)
	c.modname();
	else if(ch==5)
	c.modsex();
	else if(ch==6)
	c.modoffence();
	else if(ch==7)
	c.modimark();
	else if(ch==8)
	c.modvictim();
	else
	cout<<"\n You have entered a wrong choice.";

	int N=fil.tellg();
	fil.seekp(N-sizeof(c));
	fil.write((char*)&c,sizeof(c));

	cout<<"\n Do you want to modify any other category of the same criminal record(Y/N)= ";
	cin>>ans;

      }while(toupper(ans)=='Y');
    }   // END OF IF STATEMENT
  }     //END OF WHILE

  if(found==0)
  cout<<"\n Criminal code not found!! ";

  // Syntax for displaying the modified record
  else
  {
    char a;
    cout<<"\n Do you want to see the modified record (Y/N) ? = ";
    cin>>a;

    if (toupper(a)=='Y')
    {
      fstream fin;     //creating object of fstream class
      fin.open("CBI.dat" ,ios::binary|ios::in);  // opening the file "CBI.dat"

      while (fin.read((char*)&c,sizeof(c)))
      {
	if(c.retcno()==cnumber)
	c.showdata();
      }     // end of while loop

      fin.close();    // closing the file "CBI.dat"
    }      //end of if

  } // end of else statement

  fil.close();  // closing file
}   //end of function- "Modify"


//--------------------------
// Main function definition
//--------------------------

int main()
{
    clrscr();   //clearscreen
    char ans='Y';

    cout<<"\n          **-----------**-----------**----------** ";
    cout<<"\n          ** CBSE COMPUTER SCIENCE PROJECT 2016 ** ";
    cout<<"\n          **-----------**-----------**----------** "<<endl;

    cout<<"\n    ***^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^***";
    cout<<"\n    ***^^          MADE BY:- VRINDA BHATIA             ^^***";
    cout<<"\n    ***^^                 CLASS XII-B                 ^^***";
    cout<<"\n    ***^^           GOODLEY PUBLIC SCHOOL           ^^***";
    cout<<"\n    ***^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^***";
    
    getch();
    clrscr();

    while (ans=='Y' )   //checking for ans='Y'
    {
     int ch;
     cout<<"\n           **---------**-----------**---------** ";
     cout<<"\n           ** Central Bureau of Investigation ** ";
     cout<<"\n           **---------**-----------**---------** "<<endl;

     cout<<"\n      =============================================== ";
     cout<<"\n                       OXFORD PRISON ";
     cout<<"\n      ===============================================";


     //CHOICES AVALABLE FOR MANIPULATING THE RECORDS

     cout<<"\n\n The available choices are :- ";
     cout<<"\n --------------------------";
     cout<<"\n 1. Enter the Details ";
     cout<<"\n 2. Display the Details ";
     cout<<"\n 3. Delete a Record ";
     cout<<"\n 4. Search a Record ";
     cout<<"\n 5. Modify a Record ";
     cout<<"\n 6. Display the List of all the Prisoners";
     cout<<"\n 7. Quit the Program ";

     cout<<"\n\n Enter your desired choice = ";
     cin>>ch;

     // USING SWITCH CASE FOR THE AVAILABLE CHOICES
     switch(ch)
     {
       case 1: enter();
	       break;

       case 2: disp();
	       break;

       case 3: del();
	       break;

       case 4: search();
	       break;

       case 5: modify();
	       break;

       case 6: c.entry();
	       break;

       case 7: exit(0);
	       break;

       default: cout<<"\n ERROR !! Wrong Input ";
	      break;
     }// end of switch case

     cout<<"\n Do you want to run the program again? (Y/N)= ";
     cin>>ans;
     ans = toupper(ans);
    // checking for ans if not equal to n and y

    if (ans=='N')
	cout<<"\n Program terminated successfully!" ;
    else if (ans!='Y'&& ans!='N')
    {
	cout<<"\n Invalid input. Please press Y to continue = ";
	cin>>ans;
	ans = toupper(ans);
    }   //end of if else

  }  // end of  while loop
  getch();
}   //end of main



//--------------------------------END------------------------------------------
