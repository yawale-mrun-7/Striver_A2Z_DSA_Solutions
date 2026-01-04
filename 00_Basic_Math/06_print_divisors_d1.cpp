/*Solution to print all the divisors of a given number
Space Complexity: O(1)
Time Complexity: O(n)
This code can be improved using divisor pairs concept
*/
#include<iostream>
using namespace std;

void printDivisors(int n) {
    if(n<0) {
        cout<<"Enter +ve numbers"<<endl;
        return;
    } 
    for(int i=1; i<=n; i++) {
            if(n%i==0) {
                cout<<i<<" ";
            }
    } 
}
int main() {
    int num=36;
    printDivisors(num);
    return 0;
}