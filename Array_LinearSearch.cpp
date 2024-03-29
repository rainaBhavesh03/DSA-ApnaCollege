#include<iostream>
using namespace std;

int LinearSearch(int n, int arr[], int key){
    for(int i=0; i<n; i++)
        if(key==arr[i]) return i;
    return -1;
}
int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int key;
    cin>>key;

    cout<<LinearSearch(n, arr, key)<<endl; //BigO(n)

    return 0;
}