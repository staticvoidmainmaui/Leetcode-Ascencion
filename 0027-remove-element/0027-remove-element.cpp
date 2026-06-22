class Solution {
public:
    int removeElement(vector<int>& nums, int val) { //remoivng from an array has o(n) time complexity, romivng from large array can be expensive
        //brain fart approach:

        int k=0;
        // for(int i=0;i< nums.size(); i++){
        //     int m=i;
        //     while(m<nums.size()&& nums[m]==val  ) {
        //         nums.erase(nums.begin() + i);
        //         k--;
        //         if( m<nums.size() && m==val ) continue;
        //         m++;
        //     }
        // }

        for(int i=0;i< nums.size(); i++){  //0 1 2 (3) 0
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }

        
        return k;
    }
};