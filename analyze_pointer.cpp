#include <iostream>
using namespace std;

// Function to analyze a pointer
void analyze_pointer(int *ptr) {

    // Display the memory address
    cout << "Memory Address: " << ptr << endl;

    // Display the value stored at that address
    cout << "Value: " << *ptr << endl;
}

int main() {

    // PART 1: Stack allocation
    int iValue = 25;

    cout << "Stack Variable:" << endl;

    // Pass the address of the stack variable
    analyze_pointer(&iValue);

    cout << endl;

    // PART 2: Heap allocation
    int *heapPtr = new int;

    // Assign a value to the heap variable
    *heapPtr = 50;

    cout << "Heap Variable:" << endl;

    // Pass the heap pointer
    analyze_pointer(heapPtr);

    // Free heap memory
    delete heapPtr;

    return 0;
}