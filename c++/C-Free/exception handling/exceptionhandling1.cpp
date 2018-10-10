//there are three forms of throw
//1)throw(exception)
//2) throw exception
//3) throw
// if catch statement does not maych the exception type it is skipped

#include<iostream>
using namespace std;

int main()
{
          int a=1;
          
          try
          {
                    if(a==0)
                    {
                         throw a;
                    }
                    else 
                    {
                         throw "sahil";
                    }   
                           
                              
          
          }
          catch(int a)
          {
                    cout<<"exception caught"<<a;
          }
          catch(const char *c)
          {
                    cout<<"exception caught"<<c;
          }
          


}
