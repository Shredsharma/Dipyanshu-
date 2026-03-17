#include <iostream>
using namespace std;

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    for(int i = 0; i < n - 1; i++) {
        int min_i = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                min_i = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_i];
        arr[min_i] = temp;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}