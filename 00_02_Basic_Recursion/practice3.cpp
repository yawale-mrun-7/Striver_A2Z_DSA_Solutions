/*Solution to print the numbers from n to 1 using recursion
Space Complexity: O(n) recursive call stack
Time Complexity: O(n) printing numbers from n to 1
This approach uses forward recursion
*/
#include<iostream>
using namespace std;

void printNum(int n) {
    if(n<1) {
        return;
    }
    cout<<n<<" ";

    printNum(n-1);
}

int main() {
    int num=6;
    printNum(6);
    return 0;
}