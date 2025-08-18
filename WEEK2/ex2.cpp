#include<iostream>
using namespace std;

double computeAverage(const int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

int findMin(const int arr[], int size) {
    int minVal = arr[0];
    for(int i = 1; i < size; ++i) {
        if(arr[i] < minVal) minVal = arr[i];
    }
    return minVal;
}

int findMax(const int arr[], int size) {
    int maxVal = arr[0];
    for(int i = 1; i < size; ++i) {
        if(arr[i] > maxVal) maxVal = arr[i];
    }
    return maxVal;
}

int main() {
    const int size = 10;
    int arr[size] = {3, 8, 1, 9, 4, 7, 2, 5, 6, 0};

    cout << "Array contents: ";
    for(int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Average = " << computeAverage(arr, size) << endl;
    cout << "Min = " << findMin(arr, size) << endl;
    cout << "Max = " << findMax(arr, size) << endl;
    return 0;
}