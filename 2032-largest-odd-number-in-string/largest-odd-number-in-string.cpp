class Solution {
public:
    string largestOddNumber(string num) {
      
        for(int i = num.size()-1; i >= 0; i--){
          int digit = num[i] - '0';
          if(digit&1){
            return num;
          }
          else{
            num.pop_back();
          }
        }

        return num;
    }
};