/*Solution to print numbers from 1 to n using backtracking
Space Complexity: O(n) recursive call stack
Time Complexity: O(n) printing every number from 1 to n
*/
#include<iostream>
using namespace std;

void printNum(int count) {
    if(count<1) {
        return;
    }
    printNum(count-1);
    cout<<count<<" ";
}

int main() {
    int num=10;
    printNum(num);
    return 0;
}