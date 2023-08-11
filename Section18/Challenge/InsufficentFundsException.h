#ifndef __INSUFFICENT_FUNDS_EXCEPTION_H__
#define __INSUFFICENT_FUNDS_EXCEPTION_H__

#include <iostream>
#include <exception>

class InsufficentFundsException : public std::exception
{
public:
    InsufficentFundsException() {}
    ~InsufficentFundsException() {}
    virtual const char *what() const noexcept {
        return "Does NOT have sufficient fund";
    }
};

#endif // __INSUFFICENT_FUNDS_EXCEPTION_H__


