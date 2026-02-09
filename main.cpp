// COMSC-210 | Lab 4A | Barsbek
#include <iostream>
#include <vector>
using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    Color test{};
    test.blue = 51;
    cout << test.blue;
    return 0;
}