#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n, target;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> target;

    unordered_set<int> s;

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];

        if (s.find(complement) != s.end()) {
            cout << arr[i] << " " << complement << endl;
            return 0;
        }

        s.insert(arr[i]);
    }

    cout << "No pair found" << endl;
    return 0;
}