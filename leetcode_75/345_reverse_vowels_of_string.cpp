/*Given a string s, reverse only all the vowels in the string and return it.
The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.
Space Complexity: O(1) — in-place modification using constant extra variables.
(Note: If the string were passed by value to reverseVowels(), 
space complexity would be O(n) due to string copy.)
Time Complexity: O(n), where n is the length of the string.
*/
#include<iostream>
#include<vector>
using namespace std;

void display(string &s, int n) {
    cout<<"{ ";
    for(int i=0; i<n; i++) {
        cout<<s[i]<<" ";
    }
    cout<<"}"<<endl;
}

int isVowel(char c) {
    c=tolower(c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    
} 
void reverseVowels(string &s) {
    int n=s.length();
    int left=0;
    int right=n-1;
    while(left<right) {
        if(!isVowel(s[left])) {  //if left not vowel
            left++;
        } else if(!isVowel(s[right])) {  //if right not vowel
            right--;
        } else {
        //now vowel positions are matched
        swap(s[left], s[right]);
        left++;
        right--;
        }
    }
    display(s, n);
}

int main() {
    string s="ab.,";
    reverseVowels(s);
    return 0;
}