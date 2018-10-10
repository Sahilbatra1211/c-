//handling derived class exception
//a base class obj in catch can accept its derived class throw obj also
//but derieved class obj in catch cannot accept base class thrown obj 
// so order of catch should be imp in such cases  
#include<iostream>
using namespace std;

class base
{};
class derived:public base
{};

int main()
{
derived obj;

try
{
          throw obj;
}
catch(base obj)
{
          cout<<"base class obj";
}
catch(derived obj)
{
          cout<<"derived class obj";
}


}
