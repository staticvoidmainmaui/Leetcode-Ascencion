class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        //for loop for counting max
        int n=1;
        unordered_set<int> hashset;
        for(int i=0;i<=nums.size()-1;i++){
            n++;
            hashset.insert(nums[i]);
        }
        vector<int> result;

        for(int j=1;j<n;j++){
            if(hashset.count(j)==0) result.push_back(j);
        }

        return result;
        //optimal no space solution
        
        // 1. First pass — mark seen values by negating nums[abs(nums[i])-1]
        // 2. Second pass — wherever nums[i] is still positive, index i+1 was never seen,push i+1 to result
    }
};