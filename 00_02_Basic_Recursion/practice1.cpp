/*Solution to print number from 1 to n
Space Complexity: O(n) recursive stack
Time Complexity: O(n) printing every number from 1 to n
This approach uses forward recursion, where each call prints the number 
and then moves on to the next call.
*/
#include<iostream>
using namespace std;

void printNum(int n, int count) {
    if(count>n) {
        return;
    }
    cout<<count<<" ";
    printNum(n, count+1);
}

int main() {
    int num=10;
    printNum(num, 1);
    return 0;
}