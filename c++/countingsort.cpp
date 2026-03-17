#include <iostream>
using namespace std;
int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

        int max = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    vector<int> count(max + 1,0);

    for(int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    int index = 0;
    for(int i = 0; i < max+1; i++) {
        if(count[i]>0){
            for(int j=0;j<count[i];j++) {
                arr[index] = i;
                index++;
            }
        }
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


    // without comparsion
    int k;cin>>k;
    vector<int> ar(k);
    for(int i = 0; i < k; i++) {
    cin >> ar[i];
    }
    

    int mx=*max_element(ar.begin(),ar.end());
    vector<int> ct(mx+1,0);
    
     for(int i=0;i<k;i++){
        ct[ar[i]]++;
     }

    int id=0;
    for(int i=0;i<=mx;i++){
        if(ct[i]>0){
            for(int j=0;j<ct[i];j++){
                ar[id]=i;
                id++;
            }
        }
    }

    cout << "Sorted array: ";
    for(int i = 0; i < k; i++) {
        cout << ar[i] << " ";
    }
}