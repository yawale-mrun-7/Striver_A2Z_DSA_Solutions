/*Solution to print numbers from n to 1 using backtracking
Space Complexity: O(n) recursive call stack
Time Complexity: O(n) numbers from n to 1 are printed
*/
#include<iostream>
using namespace std;

void printNum(int n, int current) {
    if(current>n) {
        return;
    }
    printNum(n, current+1);

    cout<<current<<" ";
}

int main() {
    int num=5;
    int curr=1;
    printNum(num, curr);
    return 0;
}