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
        //for loop iterating through range
    }
};