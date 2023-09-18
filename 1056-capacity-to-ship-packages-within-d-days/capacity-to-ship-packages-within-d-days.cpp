class Solution {
private:
    bool canWeShip(vector<int> weights, int days, int mid){
        int daysCount = 1;
        int weightSum = 0;

        for(int i = 0; i < weights.size(); i++){

            if(weightSum + weights[i] <= mid){
                weightSum += weights[i];
            }
            else{
                daysCount++;
                if(daysCount > days || weights[i] > mid){
                    return false;
                }
                weightSum = weights[i];
            }
        }
        return true;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxWeight = 0;
        for(int i = 0; i < weights.size(); i++){
            maxWeight += weights[i];
        }

        int start = 0;
        int end = maxWeight;
        int mid = start + (end-start)/2;

        while(start <= end){

            if(canWeShip(weights, days, mid)){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }

        return start;
    }
};