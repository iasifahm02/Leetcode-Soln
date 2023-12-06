class Solution {
public:
    int totalMoney(int n) {
        int total = 0;
        int start = 1;
        int saveMoney = start;

        for(int i = 1; i <= n; i++){
            total = total + saveMoney;
            saveMoney++;;
            if(i%7 == 0){
                start++;
                saveMoney = start;
            }
        }
        return total;
    }
};