#include <iostream>
#include <vector>
using namespace std;

// Function to find largest element
int findLargest(const vector<int>& arr) {
    int largest = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

// Function to find smallest element
int findSmallest(const vector<int>& arr) {
    int smallest = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be greater than 0.";
        return 0;
    }

    vector<int> arr(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Largest Element is: " << findLargest(arr) << endl;
    cout << "Smallest Element is: " << findSmallest(arr) << endl;

    return 0;
}