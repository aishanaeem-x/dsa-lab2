#include <iostream>
#include <cassert>
using namespace std;

// Temporary implementation for TDD demonstration
bool isSorted(const int* arr, const int size) {
    return false;
}

// Test 1: Already sorted array
void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
}

// Test 2: Unsorted array
void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    assert(isSorted(arr, 5) == false);
}

// Test 3: Sorted array with duplicates
void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true);
}

// Test 4: Single element
void testSingleElement() {
    int arr[] = {7};
    assert(isSorted(arr, 1) == true);
}

// Test 5: Descending array
void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
}

// Test 6: Negative values
void testNegativeValues() {
    int arr[] = {-5, -3, -1, 0, 2};
    assert(isSorted(arr, 5) == true);
}

// Test 7: All elements equal
void testAllEqual() {
    int arr[] = {4, 4, 4, 4};
    assert(isSorted(arr, 4) == true);
}

// Test 8: Two elements unsorted
void testTwoElements() {
    int arr[] = {9, 2};
    assert(isSorted(arr, 2) == false);
}

int main() {

    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testAllEqual();
    testTwoElements();

    cout << "All tests passed!" << endl;

    return 0;
}