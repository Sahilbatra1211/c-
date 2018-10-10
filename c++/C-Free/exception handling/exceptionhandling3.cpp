//instead of throiwing pre defined data type like int we are throwing user defined dattype
#include<iostream>
#include<cstring>
using namespace std;

class excp
{
          int i;
          char s[20];
          
         public:
         excp(int a,const char *b)
         {          
                    i=a;
                    strcpy(s,b);
          }
          void putdata()
          {
                    cout<<endl<<i<<":"<<s;
          }

};

class user
{
          int age;
          float salary;
          
          
          public:
          
          void getdata()
          {
                    try
                    {
                              cout<<"enter age";
                              cin>>age;
                              
                              if(age>40)
                              {
                                        excp e(1,"age not valid");             // [parametric constructor can be called in 3 ways
                                        throw e;                                //1)excp obj(1,"sad")  2) excp obj=excp(1,"sad") 
                              }                                                 //3)excp obj=(3,"sad")
                              cout<<"enter salary";
                              cin>>salary;
                              
                              if(salary<100)
                              {
                                        throw excp(2,"salary not valid");
                              }
                    }
                    catch(excp e)
                    {
                              e.putdata();
                    
                    }
          }
      };
  int main()
  {
  user obj;
  obj.getdata();
  
  }        
