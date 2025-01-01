#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x = 0.5;
    double true_value = exp(x);  // Exact value of e^x
    double approx_2_terms = 1 + x;
    double approx_3_terms = approx_2_terms + (x * x) / 2.0;
    double approx_4_terms = approx_3_terms + (x * x * x) / 6.0;

    cout << "True value of e^0.5: " << true_value << endl;
    cout << "Approximation with 2 terms: " << approx_2_terms << ", Error: " << fabs(true_value - approx_2_terms) << endl;
    cout << "Approximation with 3 terms: " << approx_3_terms << ", Error: " << fabs(true_value - approx_3_terms) << endl;
    cout << "Approximation with 4 terms: " << approx_4_terms << ", Error: " << fabs(true_value - approx_4_terms) << endl;

    return 0;
}
