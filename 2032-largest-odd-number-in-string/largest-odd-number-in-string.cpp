class Solution {
public:
    string largestOddNumber(string num) {
        
        for(int i = num.size()-1; i >= 0; i-- ){
            int dig = num[i] - '0';
            if(dig%2 != 0){ //digit is odd
                break;
            }
            else{
                num.pop_back();
            }
        }
        return num;
    }
};