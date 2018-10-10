//rethrow can be done by only htro;
//this causes cuurent exception to be passed to outer catch
//an exception can be thrown only within the inner catch statement


#include<iostream>
using namespace std;

int main()
{

          int a=0;
          int b=0;
          
          
         try
         {
          try{
          throw "hello";
          }
          catch(const char *c)
          {
          cout<<"inner catch"<<c;
          throw;
          }
                   
         }
         catch(const char *s)
         {
         cout<<"outer catch"<<s;
         }
          






}
