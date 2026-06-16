#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    unordered_set<int> seen;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) == seen.end()) {
            cout << arr[i] << " ";
            seen.insert(arr[i]);
        }
    }

    return 0;
}