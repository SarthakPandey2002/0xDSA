/* Palindrome Number */


class Solution {
public:
    bool isPalindrome(int x) {
        string s= to_string(x);
        int n =s.length();
        for(int i=0; i<n/2; i++){
             if (s[i] != s[n -i - 1]) {
              return false;
             }
        
        }
        return true;
    }
};
