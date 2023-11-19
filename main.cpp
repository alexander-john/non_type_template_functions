/*
 * What you need:
 * CLion IDE
 *
 * Step 1:
 * Download Zip
 *
 * Step 2:
 * Unzip
 *
 * Step 3:
 * Open main.cpp in CLion
 *
 * Step 4:
 * Done!
 *
 * The template parameters can not only include types introduced by class or typename,
 * but can also include expressions of a particular type:
 *
 * This program was written by Alexander John using information from the source below.
 *
 * Source: https://cplusplus.com/doc/tutorial/functions2/
 */

#include <iostream>
using namespace std;

template <class T, int N>
T fixed_multiply(T val) {
    return val * N;
}

int main() {
    cout << fixed_multiply<int, 2>(10) << '\n';
    cout << fixed_multiply<int, 3>(10) << '\n';

    return 0;
}
