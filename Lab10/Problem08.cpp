//Problem 8
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    const int rolls = 10000;
    int frequency[6] = {0};

    for (int i = 0; i < rolls; i++) {
        int roll = (rand() % 6) + 1;
        frequency[roll - 1]++;
    }

    cout << "Die Roll Frequencies after " << rolls << " rolls:\n";
    for (int i = 0; i < 6; i++) {
        cout << "Face " << (i + 1) << ": " << frequency[i] << " times\n";
    }

    return 0;
}
