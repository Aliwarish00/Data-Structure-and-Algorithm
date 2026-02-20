#include<iostream>
using namespace std;

 void selectionsort(int arr[], int size ){

 for (int i = 0; i < size - 1; i++) {
       
        int min = i;
         bool swapped  = false;
        for (int j = i + 1; j < size ; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        
        if (min != i) {
            swap(arr[i], arr[min]);
            swapped = true;
        }


    }
}
int main(){
    int arr[] = { 2, 1 , 3, 4 ,5 ,6 };
    int size = sizeof(arr) / sizeof(arr[0]);
    

    cout<< " original array ";
    for (int i =0; i<size; i++){
        cout<<arr[i]<< " ";
    }


    selectionsort(arr,size);
    cout<< " sorted array ";
    for(int i =0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<" selection sort successful ";
} 

