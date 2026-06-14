#include <iostream>

//function to find frequency
int findFrequency(int arr[], int size, int key) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    return count;
}

int main() {
    int n, key;

    std::cout << "Enter array size: ";
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Enter element: ";
    std::cin >> key;
    std::cout << "Frequency : " << findFrequency(arr, n, key);
    return 0;
}