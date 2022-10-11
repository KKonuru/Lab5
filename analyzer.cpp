#include <iostream>
#include "StringData.h"
#include <string>
#include <vector>

using namespace std;

int linear_search(vector<string> container, string element) {
    for (int i = 0; i <= container.size(); i++) {
        if (container[i] == element) {
            return i;
        } else
            return -1;

    }
    return 0;
}

int binary_search(vector<string> container, string element) {
    int mid = 0;
    int low = 0;
    int high = container.size() - 1;
    while (high >= low) {
        mid = (high + low) / 2;
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
    long long t1 = systemTimeNanoseconds();
    cout << (linear_search(getStringData(), "not_here"));
    long long t2 = systemTimeNanoseconds();
    cout << (t2 - t1)

    cout << "Binary search for ""not_here"" is being tested.";
    long long t3 =  systemTimeNanoseconds();
    cout << (binary_search(getStringData(), "not_here"));
    long long t4 =  systemTimeNanoseconds();
    cout << (t4 - t3);

    cout << "Linear search for ""mzzzz"" is being tested.";
    long long t5 =  systemTimeNanoseconds();
    cout << (linear_search(getStringData(), "mzzzz"));
    long long t6 =   systemTimeNanoseconds();
    cout << (t6 - t5)

    return 0;
}

