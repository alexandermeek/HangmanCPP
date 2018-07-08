#ifndef NOINPUTEXCEPTION_H
#define NOINPUTEXCEPTION_H

#include <exception>

class NoInputException : public runtime_error {
    public:
        const char* what () const throw ();
};

#endif // NOINPUTEXCEPTION_H
