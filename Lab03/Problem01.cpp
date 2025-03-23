//Problem 1
#include <iostream>
using namespace std;

int main() {
    int sum = 0, number;
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> number;
        sum += number;  // Add each number to sum
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
