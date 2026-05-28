class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //distance between i and j less than number given
        //for loop iterates auto a , the current number in nums to the end of the vector
        //a is the number , and the value of hashset[a] should be the indice at which it was written down
        //nums[i] is the current value of nums, now becoming the key for second approach
        //seconda approach uses nums[i] which is the number in the vector 
        //j is seonc iterator j[i] should be the number complement to nums[i], this is not true at all

        unordered_map<int,int> Hmap;   //number-> indice
        int absolute_value=INT_MAX;
        int j=0;

        //Approach 1 : range- based loop    -   doesnt allow for indeces extraction
        // for(auto a : nums){
        //     Hmap[a]++;
        //     if(Hmap.count(a)){
        //     }
        // }
        
        //Approach 2 : for loop to check when it was last seen 
        
        for(int i=0; i < nums.size(); i++){
            //if last seen then check if abs less or 
            if(Hmap.count(nums[i])){
                //calculate absolute value
                j=Hmap[nums[i]];
                absolute_value=i-j;
                if(absolute_value<=k) {
                    return true;
                }
                
            }
            Hmap[nums[i]]=i;

        }
        return false;
    }
};