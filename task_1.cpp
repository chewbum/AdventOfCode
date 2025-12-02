#include <iostream>
#include <string>

using namespace std;

int main() {
    int maxRange = 99;
    int minRange = 0;
    int currentPosition = 0;

    // pipe input to the program
    string line;
    string direction;
    int steps;
    while (std::cin >> line) {
        // process the line
        direction = line[0];
        steps = stoi(line.substr(1, line.length() - 1));
    }

    return 0;
}