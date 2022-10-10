#include <iostream>
#include "StringData.h"
using namespace std;

int linear_search(string container[], string element) {
    for (int i = 0; i <= sizeof(container); i++) {
        if (container[i] == element) {
            return i;
        } else
            return -1;

    }
    return 0;
}

int binary_search(string container[], string element) {
    int mid = 0;
    int low = 0;
    int high = sizeof(container) - 1;
    while (high >= low) {
        mid = (high + low) // 2;
        if (container[mid] < element) {
            low = mid + 1;
        }
        else if (container[mid] > element) {
            high = mid - 1;
        }
        else
            return mid;
    }
    return -1;
}
int main() {
    cout << "Linear search for ""not_here"" is being tested.";
    int t1 = chrono::system_clock::now()
    cout << (linear_search(Stringdata.get_data(), "not_here"));
    int t2 = Stringdata.systemTimeNanoseconds();
    cout << (t2 - t1)

    cout << "Binary search for ""not_here"" is being tested.";
    int t3 = Stringdata.systemTimeNanoseconds();
    cout << (binary_search(stringdata.get_data(), "not_here"));
    int t4 = Stringdata.systemTimeNanoseconds();
    cout << (t4 - t3);

    cout << "Linear search for ""mzzzz"" is being tested.";
    int t5 = Stringdata.systemTimeNanoseconds();
    cout << (linear_search(stringdata.get_data(), "mzzzz"));
    int t6 =  Stringdata.systemTimeNanoseconds();
    cout << (t6 - t5)

    return 0;
}

