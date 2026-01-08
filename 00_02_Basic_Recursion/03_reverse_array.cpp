/*Solution to reverse an array using the STL function reverse
Space Complexity: O(n) foor the display function
Time Complexity: O(1) same array used, no extra container (significant space) is used
This approach also works with arrays using pointers/iterators.
The reverse() function is provided by the <algorithm> header.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int>& arr) {
    int n=arr.size();
    cout<<"{ ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"}"<<endl;
}
void reverseArray(vector<int>& arr) {
    reverse(arr.begin(), arr.end());
    display(arr);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    display(arr);
    reverseArray(arr);
    return 0;
}