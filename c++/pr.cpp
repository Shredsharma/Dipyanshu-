#include <iostream>
#include <vector>
using namespace std;
int main(){
//bubble sort
    // int arr[] = {64, 25, 12, 22, 11};
    // int n = 5;
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    //insertion sort
    // for(int i=1;i<n;i++){
    //     int key=arr[i];
    //     int j=i-1;
    //     while(j>=0 && arr[j]>key){
    //         arr[j+1]=arr[j];
    //         j--;
    //     }
    //     arr[j+1]=key;
    // }

    //     for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    //selection sort
    // for(int i=0;i<n-1;i++){
    //     int mi=i;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]<arr[mi]){
    //             mi=j;
    //         }
            
    //     }
    //     swap(arr[i],arr[mi]);
    // }
    //       for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    
    //counting sort
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;
    int max=0;
    for(int i=0;i<n;i++){
        
        if(arr[i]>max){
            max=arr[i];
        }
    }
    vector<int> co(max+1,0);
    for(int i=0;i<n;i++){
        co[arr[i]]++;
    }
    int id=0;
    for(int i=0;i<max+1;i++){
        if(co[i]>0){
            for(int j=0;j<co[i];j++){
                arr[id]=i;
                id++;
            }
        }
    }


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }






}
