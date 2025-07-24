#include <iostream>

struct VAL {
  struct Reg01 {
    enum B {
      first,
    }
  };
};

class error : public std::exception {
  using std::exception::exception;
};

int main() { return 0; }
