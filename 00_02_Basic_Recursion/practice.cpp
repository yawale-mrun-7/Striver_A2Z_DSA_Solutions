/*Solution to print name n times
Space Complexity: O(n) stack space used for recursive calls
Time Complexity: O(n) function called n times*/
#include<iostream>
using namespace std;

void printName(int n, int count) {
    if(n==count) {
        return;
    }
    cout<<"Mrunmayee"<<endl;
    printName(n, count+1);
}
int main() {
    int num=3;
    printName(num, 0);
    return 0;
}