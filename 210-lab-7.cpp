// COMSC-210 | Lab 7 | Mamadou Sissoko
// IDE used: Visual Studio Code

#include <iostream>
#include <string>
using namespace std;

// Function to display array
void displayArray(string* arr, int size) {
    for (int i = 0; i < size; i++)
        cout << *(arr + i) << " ";
    cout << endl;
}

// Function to reverse a dynamic array
string* reverseArray(string* arr, int size) {
    for (int i = 0; i < size / 2; i++) {
        string temp = *(arr + i);
        *(arr + i) = *(arr + (size - 1 - i));
        *(arr + (size - 1 - i)) = temp;
    }
    return arr;
}

int main() {
    int size = 5;
    string* names = new string[size];

    // Populate array
    *(names + 0) = "Janet";
    *(names + 1) = "Jeffe";
    *(names + 2) = "Jin";
    *(names + 3) = "Joe";
    *(names + 4) = "Junio";

    // Display original array
    cout << "Original array: ";
    displayArray(names, size);

    // Reverse array
    names = reverseArray(names, size);

    // Display reversed array
    cout << "Reversed array: ";
    displayArray(names, size);

    // Free memory
    delete[] names;
    return 0;
}
