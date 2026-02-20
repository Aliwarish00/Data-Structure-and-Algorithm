#include<iostream>
using namespace std;

int bin_search ( int x[] , int size , int key){
    int L , R , mid ;
    L =0 , R = size-1;
    while( L <= R){
    mid = ( L + R)/2;
    if( key == x [mid]) return mid;
    if( key < x [ mid]) R = mid -1 ;
    else L = mid +1;
    }
    return -1;
}
int main(){
     int x[] = {4, 3, 5, 6, 7, 8, 9};
    int size = sizeof(x) / sizeof(x[0]); // safer way to get size yaha size of array se har array ki index se divide kiye huwe hai to find size .
    int key = 8;

    int result = bin_search(x, size, key);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}