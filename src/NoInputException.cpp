#include <exception>

using namespace std;

struct NoInputException : public exception {
   const char * what () const throw () {
      return "Nothing was entered.";
   }
};
