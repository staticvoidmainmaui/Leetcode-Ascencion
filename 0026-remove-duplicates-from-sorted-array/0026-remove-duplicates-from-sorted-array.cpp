class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        int duplicate;
        for(int i=0; i<nums.size(); i++){
            
            if(nums[i]!=duplicate){
                nums[k]=nums[i];
                duplicate=nums[k];
                k++;
            }


        }
        return k;
    }
};