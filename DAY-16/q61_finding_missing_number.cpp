#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;  // numbers are from 1 to n

    long long sum = 0, x;
    for (int i = 0; i < n - 1; i++) {
        cin >> x;
        sum += x;
    }

    long long expected = (long long)n * (n + 1) / 2;
    cout << expected - sum << endl;

    return 0;
}