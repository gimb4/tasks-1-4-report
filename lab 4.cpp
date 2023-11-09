#include <iostream>
using namespace std;

void printPositiveThenNegative(int arr[], int size) {
    cout << "Положительные числа: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            cout << arr[i] << " ";
        }
    }

    cout << "\nОтрицательные числа: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int arr[] = { 44, -21, 190, -6, 9, -43 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printPositiveThenNegative(arr, size);

    return 0;
}