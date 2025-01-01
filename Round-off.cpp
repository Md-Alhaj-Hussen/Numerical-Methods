#include <iostream>
using namespace std;

int main() {
    double sum = 0.0;
    double increment = 0.1;

    // Add 0.1 ten times
    for (int i = 0; i < 10; ++i) {
        sum += increment;
    }

    cout << "Sum of 0.1 added 10 times: " << sum << endl;

    // Check if the result is exactly 1.0
    if (sum == 1.0) {
        cout << "The sum is exactly 1.0" << endl;
    } else {
        cout << "The sum is not exactly 1.0 due to round-off error" << endl;
    }

        // Check if the result is exactly 1
    if (sum == 1) {
        cout << "The sum is exactly 1.0" << endl;
    } else {
        cout << "The sum is not exactly 1.0 due to round-off error" << endl;
    }
    cout<<sum;
    return 0;
}
