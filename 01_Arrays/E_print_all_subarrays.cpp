#include<iostream>
using namespace std;

void printSubarrays(int *arr, int n) {
    for(int start=0; start<n; start++) {
        for(int end=start; end<n; end++) {
            cout<<"(";
            for(int i=start; i<=end; i++) {
                cout<<arr[i]<<"";
            }
            cout<<") ";
        }
        cout<<endl;
    }
}
int main() {
    int nums[]={1, 2, 3, 4, 5};
    int n=sizeof(nums)/sizeof(int);
    printSubarrays(nums, n);
    return 0;
}