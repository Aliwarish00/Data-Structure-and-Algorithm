#include <iostream> 
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Target found at index i
        }
    } 
    return -1; // Target not found
}

int main() {
    int arr[] = {4, 3, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]); // safer way to get size yaha size of array se har array ki index se divide kiye huwe hai to find size .
    int target = 8;

    int result = linearSearch(arr, size, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}