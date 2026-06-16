#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int maxFreq = 0, element;

    for (auto &p : freq) {
        if (p.second > maxFreq) {
            maxFreq = p.second;
            element = p.first;
        }
    }

    cout << "Element: " << element << "\n";
    cout << "Frequency: " << maxFreq << "\n";

    return 0;
}