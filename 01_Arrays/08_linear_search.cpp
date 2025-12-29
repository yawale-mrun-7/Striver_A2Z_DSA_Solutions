#include<iostream>
using namespace std;
int linearSearch(int *arr, int n, int key) {  //function for linear searching takes pointer to index 0 of array, n length of array and user inputted key
    for(int i=0; i<n; i++) {
        if(arr[i]==key) {
            return i;
        }
    }
    return -1;  //as first index is 0.
}
int main() {
    int arr[]={3, 2, 5, 10, 9};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter key"<<endl;
    cin>>key;
    cout<<linearSearch(arr, n, key)<<endl;
    return 0;
}