#include<iostream>
#include<climits>
using namespace std;
int secondLargest(int *arr, int n) {
    if (n<2) {
        return -1;
    }
    int largest = arr[0];
    int secondLargest=INT_MIN;
    for(int i=1; i<n; i++) {
        if(arr[i]>largest) {
            secondLargest=largest;  //storing the earlier largest value into secondLargest
            largest=arr[i];  //updating largest value
        }
        if(arr[i]<largest && arr[i]>secondLargest) {
            secondLargest = arr[i];  //updating secondLargest
        }
    }
    return secondLargest;
}
int main() {
    int arr[]={2, 5, 3, 6, 7};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Second Largest: "<<secondLargest(arr, n);
    return 0;
}