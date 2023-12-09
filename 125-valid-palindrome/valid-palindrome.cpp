class Solution {
private:
    char toLowerCase(char ch){
        return ch + 'a' - 'A';
    }
public:
    bool isPalindrome(string s) {
        string str; //extract krlo pehle
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9'){
                str.push_back(s[i]);
            }
        }

        //Lowercase me convert krlo
        for(int i = 0; i < str.length(); i++){
            char ch = str[i];
            if(str[i] >= 'A' && str[i] <= 'Z'){
                str[i] = toLowerCase(str[i]);
            }
        }

        int start = 0, end = str.length()-1;
        while(start < end){
            if(str[start] != str[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;

    }
};