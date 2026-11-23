#include <iostream>
#include <string>
using namespace std;

template <typename T>   // works for int, double, string...
T maxOf(T a, T b) { return (a > b) ? a : b; }

int main() {
    cout << maxOf(3, 7) << " " << maxOf(2.5, 1.1)
         << " " << maxOf<string>("apple", "mango") << endl;
    return 0;
}
