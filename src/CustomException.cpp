#include "CustomException.hpp"

CustomException::CustomException(eErrorType errorType) : _errorType(errorType)
{
}

CustomException::~CustomException()  {}

std::string     CustomException::what() throw() {
  eErrorType   te = this->_errorType;

  // if (te == eErrorType::e_serverOnload)
  //   return "Server is on load";
  // if (te == eErrorType::e_bind)
  //   return "Fail: bind";
  // if (te == eErrorType::e_connect)
  //   return "Fail: connect";
  // if (te == eErrorType::e_invalidAddr)
  //   return "Invalid address";
  // if (te == eErrorType::e_createSock)
  //   return "Fail: create socket";
  // else
    return "Some error";
}
