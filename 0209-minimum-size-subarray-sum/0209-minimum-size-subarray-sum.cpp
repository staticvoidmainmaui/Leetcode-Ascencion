class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int best=INT_MAX;
        int cur_sum=0;
        int start=0;
        int len=0;
        //unordered_map<int> hashmap; 
        for(int i=0; i< nums.size(); i++){
            cur_sum+= nums[i];
            len++;
            while(cur_sum >= target){
                if(len<best) best=len;
                cur_sum -= nums[start++];
                len--;
            }
        }
        int sum=0;
        if(best==INT_MAX) return 0;
        return best;
    }
};