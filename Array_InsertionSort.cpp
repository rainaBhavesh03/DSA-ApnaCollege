#include<iostream>
using namespace std;

// Always, for CP, use inbuilt sort() function for  sorting

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    for(int i=1; i<n; i++){
        int current = arr[i], j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

// Sorted in Increasing Order

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}