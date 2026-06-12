#include <iostream>
using namespace std;

// Function to find nth Fibonacci term
int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "The " << n << "th Fibonacci term is: " << fibonacci(n);

    return 0;
}