#include <iostream>

//function to perform linear search
int linearSearch(int arr[], int size, int key){
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }

    return -1;
}

int main() {
    int n, key;
     std::cout << "Enter array size: ";
    std::cin >> n;

    int arr[n];

    std::cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Enter element to search: ";
    std::cin >> key;

    int result = linearSearch(arr, n, key);
    if (result != -1) {
        std::cout << "Element found at index " << result;
    }
    else {
        std::cout << "Element not found";
    }

    return 0;
}