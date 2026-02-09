// COMSC-210 | Lab 4A | Barsbek
#include <iostream>
#include <vector>
#include <random>
#include <ctime>

using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    srand(time(0));
    const int MIN{25};
    const int MAX{50};

    const int RGB_MIN{0};
    const int RGB_MAX{255};

    vector<Color> colorHue{};

    // Generate Random
    int n{rand() % (MAX - MIN + 1) + MIN}; // n colors 25-50
    int rndHue{rand() % (RGB_MAX - RGB_MIN + 1) + RGB_MIN}; // generates 0-255

    for (int i = 0; i < n; ++i) {
        Color temp{};
        temp.red = rndHue;
        temp.red = rndHue;
        temp.red = rndHue;
    }

    return 0;
}