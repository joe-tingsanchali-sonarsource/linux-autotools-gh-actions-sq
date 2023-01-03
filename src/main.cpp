#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

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
//test1
void MyPrintf1 ( char * pFormat, ... )	// Noncompliant
{
    // ...
}
//test2
void MyPrintf2 ( char * pFormat, ...) __attribute__(( format(printf,1,2)))	// Noncompliant
{
    // ...
}
