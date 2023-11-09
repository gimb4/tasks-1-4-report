#include <iostream>
#include <cmath>
usnig namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int decimalNumber;

    cout << "Введите десятичное число: ";
    cin >> decimalNumber;

    if (decimalNumber < 0) {
        cout << "Отрицательные числа не поддерживаются." << endl;
        return 1;
    }

    if (decimalNumber == 0) {
        cout << "Двоичное представление: 0" << endl;
        return 0;
    }

    int binary[255]; 
    int index = 0;

    
    while (decimalNumber > 0) {
        binary[index] = decimalNumber % 2;
        decimalNumber /= 2;
        index++;
    }

    cout << "Двоичное представление: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }
    cout << std::endl;

    return 0;
}