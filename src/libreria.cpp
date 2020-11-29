//#include <src/libreria.hpp>
#include "libreria.hpp"

#include "constantes.hpp"

MyInt::MyInt(int num)
:num_(num)
{}

bool MyInt::isOdd()
{
  return (num_ % 2) != 0 ? true : false;
}

bool MyInt::isEven()
{
  return !isOdd();
}

int Addnum(int p)
{
   return (p+NUMERAZO);
}
