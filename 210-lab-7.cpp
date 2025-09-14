// COMSC-210 | Lab 7 | Mamadou Sissoko
// IDE used: Visual Studio Code

#include <iostream>
#include <string>
using namespace std;

int main() {
    int size = 5;

    // Dynamically allocate array of strings
    string* names = new string[size];

    // Populate array with 5 names
    *(names + 0) = "Janet";
    *(names + 1) = "Jeffe";
    *(names + 2) = "Jin";
    *(names + 3) = "Joe";
    *(names + 4) = "Junio";

    // Display original array using pointer notation
    cout << "Original array: ";
    for (int i = 0; i < size; i++)
        cout << *(names + i) << " ";
    cout << endl;

    // Free dynamically allocated memory
    delete[] names;
    return 0;
}
