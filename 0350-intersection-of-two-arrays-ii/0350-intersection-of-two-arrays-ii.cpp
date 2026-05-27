class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        //hashset has all the values that are pasted in  ...e.g 9,4,4,9
        //auto a is the current number in nums1 
        //auto b is the current number in nums 2
        //value of hashset[a] is the occurances of that number a as well  
        //key would be i ? the key is the number seen and the hashset[key]
        //the value of hashset[key] is the occurances
        //hashset.count[b] counts the number of ocurrances of auto b in nums1.


        unordered_map<int,int> hashset;  //<numbers->occurances>
        vector<int> result;
        
    
        for(auto a : nums1){
            hashset[a]+=1;
        }
        
        //pushes back each time the number is seen in second array
        for(auto b: nums2) {
            if(hashset[b]>=1) result.push_back(b);
                hashset[b]= hashset[b]-1;
                //hashset.erase(b); 
        }
    return result;
    }
};