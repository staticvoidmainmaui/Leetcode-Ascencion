class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        //hashset has all the values that are pasted in  ...e.g 9,4,4,9
        //auto a is the current number in nums1 
        //auto b is the current number in nums 2
        //value of hashset[a] is the occurances of that number a as well  
        //key would be i ? the key is the number seen and the hashset[key]
        //the value of hashset[key] is the occurances
        //hashset.count[b] tracks the number of occurances in set nums1


        unordered_map<int,int> hashset;  //<numbers->occurances>
        vector<int> result;
        
    
        for(auto a : nums1){
            hashset[a]+=1;
        }
        
        //pushes back each time the number is seen in second array
        for(auto b: nums2) {
            if(hashset[b] > 0){
                result.push_back(b);
                hashset[b]--;
            }

            // if(hashset.count(b)>=1) {
            //     hashset[b]= hashset[b]-1;
            //     if(hashset[b]>=1) result.push_back(b);

                //hashset.erase(b); 
        }
            //if i did s.count -> then res.insert into table
            //return std::vector<int>(res.begin(), res.end());
            //buids the vector out of the resolution unordered set
            //-> std::unordered_set<int> res;
        return result;
    }
};