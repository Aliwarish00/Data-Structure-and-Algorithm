#include <iostream>
using namespace std;

void bubblesort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        bool flag = false;         // array is not sorted yet 
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag  = false ;
            }
            if(flag == true ) break;
        }
    }
}

int main() {
    int arr[5] = {66, 1, 22, 99, 77};
    int n = 5;

    cout << "Before sorting: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    bubblesort(arr, n);

    cout << "\nAfter sorting: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

}
