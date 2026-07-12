class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int unique=0;
        for(int i=0; i<=nums.size()-1 ; i++) {
            if(nums[unique]<nums[i]){
                unique=i;
            }
        }

        for(int j=0; j<= nums.size()-1; j++){
            if(j==unique) continue;
            if(nums[j]*2>nums[unique]){
                return -1;
            }
        }
        return unique;

    }
};