#include <iostream>

#include <vector>
using namespace std;

int partition(vector<int>& arr, int st, int end) {
    int idx = st - 1, pivot = arr[end];

    for (int j = st; j < end; j++) {
        if (arr[j] < pivot) {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

void quicksort(vector<int>& arr, int st, int end) {
    if (st < end) {
        int pivIdx = partition(arr, st, end);

        quicksort(arr, st, pivIdx - 1);
        quicksort(arr, pivIdx + 1, end);
    }
}

int main() {
    vector<int> arr = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = arr.size(); 
    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quicksort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}
