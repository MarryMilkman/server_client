#include "CastumException.hpp"

CastumException::CastumException(eType errorType) : _errorType(errorType)
{
}

CastumException::~CastumException()  {}

std::string     CastumException::what() throw() {
  eType   te = this->_errorType;

  if (te == eType::e_serverOnload)
    return "Server is on load";
  if (te == eType::e_bind)
    return "Fail: bind";
  if (te == eType::e_connect)
    return "Fail: connect";
  if (te == eType::e_invalidAddr)
    return "Invalid address";
  if (te == eType::e_createSock)
    return "Fail: create socket";
  else
    return "Some error";
}
