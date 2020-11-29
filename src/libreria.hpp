#ifndef _LIBRERIA_
#define _LIBRERIA_

class MyInt
{
public:
  MyInt(int num);
  int Addnum(int p);
  bool isOdd();
  bool isEven();
private:
  int num_;
};

#endif