class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // for(int i=0;i==k;i++){
        //     for(int j=nums.size()-1; j>0 ; j--){
        //         nums[j]=nums[j-1];
        // }
        // nums[0]=nums[nums.size()-1];
        // }
        vector<int> copy(nums);
        

        for(int i=0;i<=nums.size()-1;i++){
            if(i+k<=nums.size()-1){
                nums[i+k]=copy[i];
            } else if(i+k>nums.size()-1){
                nums[(i+k) % nums.size()] = copy[i];
            }
        }
    }
};