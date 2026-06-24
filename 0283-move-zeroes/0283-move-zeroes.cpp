class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0; // keeper for integer index 
        for(int i=0; i<= nums.size()-1;i++){
            if(nums[i]!=0){
                nums[k]=nums[i];
                k++;
            }
        }
        int differece=nums.size()-k;
        for(;k<= nums.size()-1;k++){
            nums[k]=0;
        }
    }
};