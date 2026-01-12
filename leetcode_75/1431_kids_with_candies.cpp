/*There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

Note that multiple kids can have the greatest number of candies.
Space Complexity: O(n) vector<bool> is used
Time Complexity: O(n) n students are checked
*/
#include<iostream>
#include<vector>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int n=candies.size();
    vector<bool> result;
   //finding the largest first
   int maxCandies=candies[0];
   for(int i=0; i<n; i++) {
    if(candies[i]>maxCandies) {
        maxCandies=candies[i];
    }
   }

   //checking each kid
   for(int i=0; i<n; i++) {
    result.push_back(candies[i] + extraCandies >= maxCandies);
   }

   return result;
}
int main() {
    vector<int> candies={2, 3, 5, 1, 3};
    int extraCandies=3;

    for(bool x : kidsWithCandies(candies, extraCandies)) {
        cout<<(x ? "true": "false" )<<" ";
    }
    return 0;
}