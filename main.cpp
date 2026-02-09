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

    vector<Color> colorHue{};
    Color someHue{};
    someHue.red = 21;
    someHue.green = 39;
    someHue.blue = 6;

    // Generate Random 25-50
    int n {rand() % (MAX - MIN + 1) + MIN};
    cout << n;
    for (int i = 0; i < n; ++i) {
        Color temp{};
    }

    return 0;
}