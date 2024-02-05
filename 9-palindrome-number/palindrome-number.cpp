class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        int reverse = 0;
        while( temp != 0){
            int digit = temp%10;
            temp = temp/10;
            if(reverse > INT_MAX/10 || reverse < INT_MIN/10){
                return false;
            }
            reverse = reverse*10 + digit;
        }

        if(reverse == x && x >= 0) return true;
        else return false;
    }
};