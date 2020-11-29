#include "../src/libreria.hpp"
#include "../src/constantes.hpp"


#include <iostream>

using namespace std;

int main(){
   cout<<"Hola  I am the simplest tutorial"<<endl;

   MyInt  my_number= MyInt(6);
   if(my_number.isOdd())
       cout<<"The number is Odd"<<endl;
   else
       cout<<"The number is even"<<endl;
         
    cout<<"The sum of 1 and NUMERAZO is "<<  my_number.Addnum(1)<<endl;
    

}