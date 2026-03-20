#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(float arr[], int n) {
    vector <vector<float>> buckets(n);

    for (int i = 0; i < n; i++) {
        int index = n * arr[i]; 
        buckets[index].push_back(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    int k = 0;
    for (int i = 0; i < n; i++) {
        for (float val : buckets[i]) {
            arr[k++] = val;
        }
    }
}

int main() {
    float arr[] = {0.78, 0.17, 0.39, 0.26, 0.72};
    int n = sizeof(arr)/sizeof(arr[0]);

    bucketSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}