class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int digits;
        for(int i=0;i<nums.size(); i++){
            int numerator=nums[i];
            digits=0;
            while(numerator!=0){
                numerator= numerator/10;
                digits++;
            }
            if(digits%2==0) count++;
            
        }
        return count;
    }
};