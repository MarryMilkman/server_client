#ifndef CUSTOM_EXCEPTION
# define CUSTOM_EXCEPTION

#include "lib.h"

class CustomException: public std::exception
{
  CustomException() = delete;
public:
  CustomException(eErrorType errorType)  ;
  ~CustomException()                ;
  std::string			what()            throw();

private:
  eErrorType           _errorType;
};



#endif
