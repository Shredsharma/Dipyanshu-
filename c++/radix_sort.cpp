#include <iostream>
#include <vector>
using namespace std;
void radixSort(vector<int> &arr) {
    int maxVal = arr[0];

    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] > maxVal)
            maxVal = arr[i];
    }

    for(int exp = 1; maxVal / exp > 0; exp *= 10) {
        countingSort(arr, exp);
    }
}
void countingSort(vector<int>& arr, int exp) {
    int n = arr.size();
    vector<int> output(n);
    int count[100] = {0};

    for(int i = 0; i < n; i++) {
        int digit = (arr[i] / exp) % 10;
        count[digit]++;
    }

    for(int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    for(int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    arr = output;
}

int main() {
    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};

    radixSort(arr);

    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}