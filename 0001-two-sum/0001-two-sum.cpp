class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int x;
        vector <int> result;
        unordered_map<int,int> hashmap;   //turn from a index->value loop into value-> index when seen remember
        for(int i=0; i < nums.size(); i++){
            int complement= target - nums[i];
            
            if(hashmap.count(complement)){  //count only looks at keys
                //store in result vector , both the index of current i and index of the hashmap stored in ->second.
                result.push_back(hashmap[complement]); 
                result.push_back(i); 
                return result;
            }
            
            hashmap[nums[i]]=i;  //if DNE , creates the value->index with [nums[i]](value) = i (index) value->index
        }
        return result;
    
    }     
};

// vector<int> twoSum(vector<int>& nums, int target) {
//         int x;
//         vector <int> result;
//         unordered_map<int,int> hashmap;
        
//         for(int i=0; i != nums.size();i++){ //num is a value
//             hashmap.insert({i,nums[i]});
//         }
        
//             for(int i=0; i != nums.size(); i++){ //num is a value
//             for(int j=i+1; j != nums.size(); j++) {
//                 if(hashmap[i] + hashmap[j] == target){
//                     result.push_back(i);
//                     result.push_back(j);
//                     return result;
//                 }
//             }
//         }
//     return result;
//     }

// //unordered_map<int,int> hashmap;
//         int x;
//         vector <int> result;
        
//         for(auto it1= nums.begin(); it1!= nums.end(); it1++){ //num is a value
//             //hashmap.insert(num);
//             //x=num;
//             for(auto it2=it1+1; it2!=nums.end(); it2++){  //learn that nums.end gives an iterator values
//                 if(*it1+*it2==target) {
//                     result.push_back(int(it1-nums.begin()));
//                     result.push_back(int(it2-nums.begin()));  // learn how assinging int value to iterator position and that nums.begin returns an iterator as well?, is it calulating the value of the nums.integer
//                 }
//             }
//         }
        
//         return result;