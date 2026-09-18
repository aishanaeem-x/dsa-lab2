#include <iostream>
#include <cstring>
using namespace std;

int main() {

    int size;

    cout << "Enter the size of the string: ";
    cin >> size;

    // Dynamically allocate memory
    char* str = new char[size + 1];

    // Clear the newline left by cin
    cin.ignore();

    cout << "Enter the string: ";
    cin.getline(str, size + 1);

    // Find the length
    int length = strlen(str);

    // Reverse the string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    cout << "Reversed string: " << str << endl;

    // Free memory
    delete[] str;

    return 0;
}