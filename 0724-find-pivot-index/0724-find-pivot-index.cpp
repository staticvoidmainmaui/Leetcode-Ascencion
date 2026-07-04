class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //int lsum + int pivot + int rsum=total sum
        //check totalsum-rightsum- removing pivot == left sum 
        //so if balance are equal on lsum==rsum - the index
        int rsum=0; int lsum=0;
        for(int i=0; i<=nums.size()-1; i++){
            rsum+=nums[i];
        }
        
        for(int j=0; j<=nums.size()-1 ; j++){
            rsum= rsum-nums[j];
            //if rsum==lsum - that index check out pivot
            if(rsum==lsum) { 
                return j;
            }
            //if not add number to leftsum of new pivot = now i+1 
            else {
                lsum+=nums[j];
            }
        }
        return -1;

    }
};