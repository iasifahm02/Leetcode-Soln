class Solution {
private:
    string removeSpaces(string s){
        string ans = "";
        int space = 0;
        for(int i = 0; i < s.size(); i++){
            char ch = s[i];
            if(ch != ' '){
                space = 0;
                ans += ch;
            }
            else if(ch == ' '){
                space++;
                if(ans != "" && space == 1){ //found space, but ans not empty
                    ans += " ";
                }
            }
        }
        return ans;
    }
public:
    string reverseWords(string s) {

        s = removeSpaces(s);

        int left = 0;
        int right = s.size()-1;

        string temp = "";
        string ans = "";

        while(left <= right){
            char ch = s[left]; //character or space

            if(ch != ' '){
                temp += ch;
            }
            else if(ch == ' '){
                if(ans != "") //ans is not empty
                    ans = temp + " " + ans;
                else //ans is empty
                    ans = temp;
                temp = "";
            }
            left++;
        }

        //fix the last word
        if(temp != ""){ //temp is not empty
            if(ans != ""){
                ans = temp + " " + ans;
            }
            else{
                ans = temp;
            }
        }
        return ans;
    }
};