class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>hashmap;
        for(int s: nums){
            hashmap[s]++; 
        }

        int l=INT_MIN;
        int r=INT_MIN; //x +1 TO THE RIGHT OF I 
        vector<int> result;
        for(int i=0; i<=nums.size()-1 ; i++ ){
            l=nums[i]-1;
            r=nums[i]+1;
            //if(i>0) { l=nums[i]-1; } else l=INT_MIN; //had nums[i]+1 , so then int MIN isnt even needed 
            //if(i<nums.size()-1) { r=nums[i]+1; } else r=INT_MIN;
            if((hashmap[nums[i]])==1 && (l==INT_MIN || hashmap.count(l)==0) && (r==INT_MIN || hashmap.count(r)==0)){
                result.push_back(nums[i]);
            } 
        }
        return result;
    }
};