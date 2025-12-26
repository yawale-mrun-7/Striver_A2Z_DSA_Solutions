#include<iostream>
using namespace std;

int main() {
    int arr[]={2, 4, 6, 8, 6, 7};
    int n=sizeof(arr)/sizeof(int);
    int max=0;
    for(int i=1; i<n; i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
    }
    cout<<"largest element: "<<max<<endl;
    return 0;
}