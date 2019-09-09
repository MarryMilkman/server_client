#ifndef CASTUM_EXCEPTION
# define CASTUM_EXCEPTION

#include "lib.h"

class CastumException: public std::exception
{
  CastumException() = delete;
public:
  CastumException(eType errorType)  ;
  ~CastumException()                ;
  std::string			what()            throw();

private:
  eType           _errorType;
};



#endif
