class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int k =0;
        int temp=0;
        for(int i=0; i <=nums.size()-1 ;i++){
            if(nums[i]%2==0){  //if (val%2) does opposite as it evaluates true for odd
                temp=nums[k];
                nums[k]=nums[i];
                nums[i]=temp;
                k++;
            }
        }
        return nums;
    }
};