#include <iostream>
using namespace std;

// Iterative factorial with iteration counter
int factorialIter(int n, int &counter) {
    int result = 1;
    counter = 0;
    for(int i = 1; i <= n; ++i) {
        result *= i;
        counter++;
    }
    return result;
}

// Recursive factorial with call counter
int factorialRecHelper(int n, int &counter) {
    counter++;
    if(n <= 1) return 1;
    return n * factorialRecHelper(n - 1, counter);
}

int factorialRec(int n, int &counter) {
    counter = 0;
    return factorialRecHelper(n, counter);
}

int main() {
    int n = 5;
    int iterCount = 0, recCount = 0;

    int factIter = factorialIter(n, iterCount);
    int factRec = factorialRec(n, recCount);

    cout << n << "! iterative = " << factIter << " (iterations: " << iterCount << ")" << endl;
    cout << n << "! recursive = " << factRec << " (calls: " << recCount << ")" << endl;

    return 0;