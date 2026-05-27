class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> hashset;
        vector<int> result;
        
        //std::unordered_set<int> s(nums1.begin(), nums1.end());
        //same as hashset+insertion
        //inserts all of nums
        
        for(auto a : nums1){
            hashset.insert(a);
        }// insertion of all in nums 1
        
        for(auto b: nums2) {
            if(hashset.count(b)>=1) {
                result.push_back(b);
                hashset.erase(b);
        }
            //if i did s.count -> then res.insert into table
            //return std::vector<int>(res.begin(), res.end());
            //buids the vector out of the resolution unordered set
            //-> std::unordered_set<int> res;
        }
    return result;
    }
};