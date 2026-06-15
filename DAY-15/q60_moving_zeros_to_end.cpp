#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int j = 0;

    // Move non-zero elements to the front
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    // Fill remaining positions with zeros
    while(j < n) {
        arr[j] = 0;
        j++;
    }

    cout << "Array after moving zeros to end: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}