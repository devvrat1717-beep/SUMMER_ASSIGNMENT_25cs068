#include <iostream>

//function to count even and odd elements
void EvenOdd(int arr[], int size) {
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        }
        else {
            oddCount++;
        }
    }

    std::cout << "Even Elements = " << evenCount << std::endl;
    std::cout << "Odd Elements = " << oddCount;
}

int main() {
    int n;

    std::cout << "Enter array size: ";
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    EvenOdd(arr, n);
    return 0;
}