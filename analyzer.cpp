#include <iostream>
#include "StringData.h"
using namespace std;

int linear_search([] container, element) {
    for i in range(len(container)) {
        if container[i] == element {
                    return i;
        }
        else {
            return -1;
        }
    }
}

int binary_search(container, element: str) {
    low = 0;
    high = len(container) - 1;
    while high >= low {
        mid = (high + low) // 2;
        if container[mid] < element {
            low = mid + 1;
        }
        else if container[mid] > element {
            high = mid - 1;
        }
        else
            return mid;
    }
    return -1;
}
int main() {
    cout << "Linear search for ""not_here"" is being tested." << endl;
    t1 = Stringdata.systemTimeNanoseconds();
    cout << (linear_search(stringdata.get_data(), "not_here")) << endl;
    t2 = Stringdata.systemTimeNanoseconds();
    cout << (t2 - t1) << std::endl;

    cout << "Binary search for ""not_here"" is being tested." << endl;
    t3 = Stringdata.systemTimeNanoseconds();
    cout << (binary_search(stringdata.get_data(), "not_here")) << endl;
    t4 = Stringdata.systemTimeNanoseconds();
    cout << (t4 - t3) << std::endl;

    cout << "Linear search for ""mzzzz"" is being tested." << endl;
    t5 = Stringdata.systemTimeNanoseconds();
    cout << (linear_search(stringdata.get_data(), "mzzzz")) << endl;
    t6 =  Stringdata.systemTimeNanoseconds();
    cout << (t6 - t5) << endl;

    return 0;
}