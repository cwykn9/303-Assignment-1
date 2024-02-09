#include <iostream>
#include "array.h"
using namespace std;

int main() {
    const std::string filename = "A1input.txt";
    int arr[MAX_SIZE];
    int size;

    try {
        fillArrayFromFile(filename, arr, size);

        int valueToFind = 10;
        int index = findValueIndex(arr, size, valueToFind);
        if (index != -1) {
            cout << "Value " << valueToFind << " found at index " << index << endl;
        } else {
            cout << "Value " << valueToFind << " not found in the array" << endl;
        }

        int newValue = 20;
        std::pair<int, int> oldValueAndNewValue = modifyValue(arr, size, 2, newValue);
        cout << "Old value: " << oldValueAndNewValue.first << ", New value: " << oldValueAndNewValue.second << endl;

        addInteger(arr, size, 50);

        replaceOrRemove(arr, size, 1, 0);

        cout << "Modified array:" << endl;
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        cout << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}

