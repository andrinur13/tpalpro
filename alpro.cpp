#include <iostream>
#include <ctime>
using namespace std;

main() {
    time_t now = time(0);

    tm *ltm = localtime(&now);

    int bulan = ltm->tm_mon + 1;

    cout << "Bulan : " << bulan << endl;
}