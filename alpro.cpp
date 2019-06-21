#include <iostream>
#include "lib.h"
using namespace std;

struct data {
  int a;
};

main() {
  hello();

  data data1;

  cout << &data1 << endl;

  cekdata(&data1);
}