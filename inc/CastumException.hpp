#ifndef CASTUM_EXCEPTION
# define CASTUM_EXCEPTION

#include "lib.h"

class CastumException: public std::exception
{
  CastumException() = delete;
public:
  ~CastumException()                throw();
  CastumException(eType errorType)  throw();
  std::string			what()            throw();

private:
  eType           _errorType;
};



#endif
