#include <iostream>

// function to display duplicate elements
void duplicates(int arr[], int size)
{
    bool found = false;

    std::cout << "Duplicate Elements: ";
    for (int i = 0; i < size; i++) {
        bool alreadyPrinted = false;

        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadyPrinted = true;
                break;
            }
        }

        if (alreadyPrinted) {
            continue;
        }

        int count = 0;

        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > 1) {
            std::cout << arr[i] << " ";
            found = true;
        }
    }

    if (!found ) {
        std::cout << "No Duplicates Found";
    }
}

int main() {
    int size;

    std::cout << "Enter array size: ";
    std::cin >> size;

    int arr[size];

    std::cout << "Enter array elements:\n";

    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    duplicates(arr, size);

    return 0;
}