// COMSC-210 | Lab 4A | Barsbek
#include <iostream>
#include <vector>
#include <random>
using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    srand(time(0));
    for (int i = 0; i < 3; ++i)
        cout << rand() << '\n';

    vector<Color> colorHue{};
    Color someHue{};
    someHue.red = 21;
    someHue.green = 39;
    someHue.blue = 6;

    colorHue.push_back(someHue);
    for (auto& i : colorHue) {
        cout << i.red << '\n';
        cout << i.green << '\n';
        cout << i.blue << '\n';
    }

    return 0;
}