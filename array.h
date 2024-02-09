#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <fstream>
#include <stdexcept>
#include <utility>
using namespace std;
const int MAX_SIZE = 100;

int findValueIndex(const int arr[], int size, int value);
pair<int, int> modifyValue(int arr[], int size, int index, int newValue);
void addInteger(int arr[], int& size, int newValue);
void replaceOrRemove(int arr[], int& size, int index, int newValue);
void fillArrayFromFile(const string& filename, int arr[], int& size);

#endif 
