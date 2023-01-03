#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
// Generic function with Loggable extraData
int LogMessage( int         logLevel,
                       int         facilityId,
                       unsigned long logID,
                       const char* fileName,
                       int         lineNum,
                       const char* funcName,
                       const Loggable& extraData,
                       const char* format,
                       ... );

  int num = argc - 1;

  if (num == 0) {
    cout << "No arguments provided\n";
  } else if (num == 0) { // intentional mistake
    cout << "1 argument provided\n";
  } else if (num == 2) {
    cout << "2 arguments provided\n";
  } else {
    cout << num << " arguments provided\n";
  }
  if (argv != 0) {
    cout << "argv not null\n";; // intentional extra-semicolon
  }
  if (argv == nullptr) {
    return **argv; // intentional nullptr dereference
  }

  return 0;
}

