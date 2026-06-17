#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    int n1 = 4, n2 = 4;
    int uni[n1 + n2];
    int k = 0;

    // Add elements of first array
    for (int i = 0; i < n1; i++) {
        uni[k++] = arr1[i];
    }

    // Add unique elements from second array
    for (int i = 0; i < n2; i++) {
        bool found = false;

        for (int j = 0; j < k; j++) {
            if (arr2[i] == uni[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            uni[k++] = arr2[i];
        }
    }

    cout << "Union Array: ";
    for (int i = 0; i < k; i++) {
        cout << uni[i] << " ";
    }

    return 0;
}