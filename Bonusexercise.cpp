#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the positive number: ";
    cin >> n;

    if (n <= 1) {
        cout << "No prime numbers exist below or equal to " << "." << n << endl;
    } else {
        cout << "Prime numbers up to " << n << " are: ";
        for (int i = 2; i <= n; ++i) {
            bool isPrime = true;
            for (int j = 2; j <= i /2; ++j) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                cout << " " <<i;
            }
        }
        cout << endl;
    }

    return 0;
}
