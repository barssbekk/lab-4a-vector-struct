// COMSC-210 | Lab 4A | Barsbek
#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <iomanip>

using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

void printColors(const vector<Color>& colors);

int main() {
    srand(time(0));

    // To generate n colors
    const int MIN{25};
    const int MAX{50};

    // To generate hue
    const int RGB_MIN{0};
    const int RGB_MAX{255};

    vector<Color> colorHue{};

    // Generate Random
    int n{rand() % (MAX - MIN + 1) + MIN}; // n colors 25-50

    for (int i {0}; i < n; ++i) {
        Color temp{};
        temp.red = rand() % (RGB_MAX - RGB_MIN + 1) + RGB_MIN;
        temp.green = rand() % (RGB_MAX - RGB_MIN + 1) + RGB_MIN;
        temp.blue = rand() % (RGB_MAX - RGB_MIN + 1) + RGB_MIN;
        colorHue.push_back(temp);
    }
    printColors(colorHue);

    return 0;
}

// printColors() outputs a table
// arguments: const vector<Color>& colors  = arrays of colors
void printColors(const vector<Color>& colors) {
    const int COLOR_COL_WIDTH{8};
    const int VALUE_COL_WIDTH{11};

    cout << left
         << setw(COLOR_COL_WIDTH) << "Color# "
         << setw(VALUE_COL_WIDTH) << "R value"
         << setw(VALUE_COL_WIDTH) << "G value"
         << setw(VALUE_COL_WIDTH) << "B value" << '\n';

    cout << left
         << setw(COLOR_COL_WIDTH) << "-----"
         << setw(VALUE_COL_WIDTH) << "-------"
         << setw(VALUE_COL_WIDTH) << "-------"
         << setw(VALUE_COL_WIDTH) << "-------" << '\n';

    for (size_t i{0}; i < colors.size(); ++i) {
        cout << left
             << setw(COLOR_COL_WIDTH) << (i + 1) // output from 1 not 0
             << setw(VALUE_COL_WIDTH) << colors.at(i).red
             << setw(VALUE_COL_WIDTH) << colors.at(i).green
             << setw(VALUE_COL_WIDTH) << colors.at(i).blue << '\n';
    }
}