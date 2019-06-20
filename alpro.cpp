#include <iostream>
using namespace std;

main() {
  int n;

  cout << "N : "; cin >> n;

  int *angka = new int[n];

  for(int i=0; i<n; i++) {
    cout << "Data : "; cin >> angka[i];
  }

  for(int i=0; i<n; i++) {
    cout << angka[i] << endl;
  }

}