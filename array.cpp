#include "array.h"
using namespace std;

int findValueIndex(const int arr[], int size, int value) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

pair<int, int> modifyValue(int arr[], int size, int index, int newValue) {
    if (index < 0 || index >= size) {
        throw out_of_range("Index out of range");
    }
    int oldValue = arr[index];
    arr[index] = newValue;
    return make_pair(oldValue, newValue);
}

void addInteger(int arr[], int& size, int newValue) {
    if (size >= MAX_SIZE) {
        throw length_error("Array size exceeded");
    }
    arr[size++] = newValue;
}

void replaceOrRemove(int arr[], int& size, int index, int newValue) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of range");
    }
    arr[index] = newValue;
    if (newValue == 0) {
        for (int i = index; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        size--;
    }
}

void fillArrayFromFile(const string& filename, int arr[], int& size) {
    ifstream inputFile(filename);
    if (!inputFile) {
        throw runtime_error("Error opening file");
    }
    size = 0;
    while (inputFile >> arr[size]) {
        size++;
    }
    inputFile.close();
}
