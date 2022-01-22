class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x < 0) return false;
        
        long int ans = 0;
        int a = x;

        while (x > 0) {
            ans = (ans * 10) + (x % 10);
            x = x / 10;
        }
        
        return a == ans;
    }
};
