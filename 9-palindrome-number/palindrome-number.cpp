class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        int ans = 0;
        while(x != 0){
            int dig = x%10;
            x = x/10;
            if(ans < INT_MAX/10 && ans > INT_MIN/10)
                ans = ans*10 + dig;
        }

        if(temp == ans && temp >= 0) return true;
        else return false;
    }
};