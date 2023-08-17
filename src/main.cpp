//#include <iostream>
//#include <chrono>
#include "testing.h"
//#include <cstdint>
using namespace std;
using namespace speedtest;

int main()
{
    srand(time(0));
    const int size = 8192;
    uint32_t *numbers = new uint32_t[size];
    auto begin = chrono::steady_clock::now();
    rand_n(numbers, size);
    sort(numbers, size);
    auto end = chrono::steady_clock::now();
    auto elapsed_ms = chrono::duration_cast<chrono::milliseconds>(end - begin);
    for (int a = 0; a < size; ++a)
        cout << "\t" << numbers[a] << "\n";
    delete[] numbers;
    cout << "The time: " << elapsed_ms.count() << " ms\n";
    return 0;
}
