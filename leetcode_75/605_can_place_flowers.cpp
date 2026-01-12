/*You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.
Space Complexity: O(1) constant extra space (in-place modification)
Time Complexity: O(n) n flowerbed spots are checked
*/
#include<iostream>
#include<vector>
using namespace std;

bool canPlaceFlowers(vector<int>& flowers, int n) {
    int size=flowers.size();
    if(n == 0) {
        return true;
    }
    for(int i=0; i<size; i++) {
        if(flowers[i] == 0) {
            int left = (i==0) ? 0 : flowers[i-1];
            int right = (i==size-1) ? 0 : flowers[i+1];

            if(left == 0 && right == 0) {
                flowers[i]=1;
                n--;
            }
        } if (n<=0) {  //flowers can be placed
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> flowers={1, 0, 0, 0, 1};
    int n=1;
    cout<<canPlaceFlowers(flowers, n);
    return 0;
}