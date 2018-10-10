#include<iostream>
using namespace std;

int main()
{
          int b=6;
          
          try
          {
                    if(b==0)
                    throw 1;
                    else if(b==1)
                    throw 2.3;
                    else
                    throw "sahil";
                    
          }
          catch(...)
          {
                    cout<<"exception caught";
          }



}
