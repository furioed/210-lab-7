// COMSC-210 | Lab 7 | Mamadou Sissoko
// IDE used: Visual Studio Code

#include <iostream>
#include <string>
using namespace std;

// Function to display elements of a dynamic array
void displayArray(string* arr, int size) {
    for (int i = 0; i < size; i++)
        cout << *(arr + i) << " "; // pointer notation
    cout << endl;
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

    // Display using function
    cout << "Original array: ";
    displayArray(names, size);

    delete[] names;
    return 0;
}
