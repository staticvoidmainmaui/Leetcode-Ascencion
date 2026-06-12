class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hashmap; //ocurrances->occurances 

        //approach 1 : loop and insert into hashmap, print top 2 of that hashmap

        // bool compare(int a, int b) { 
        //     return a > b;
        // }  
        
        //Can't define a function inside a function in C++ — use a lambda:

        // auto compare = [](pair<int,int> a, pair<int,int> b) {
        //     return a.second > b.second;  // sort by frequency (second), not value
        // };

        vector<int> result;
        // std::sort(nums.begin, nums.end, compare);
        // int largest=0;
        for(auto a : nums){
            hashmap[a]++; //increase occurance of the integer seen by one
            // if(largest < hashmap[a]) largest = hashmap[a]
        }
        vector<pair<int,int>> topk(hashmap.begin(), hashmap.end());

        sort(topk.begin(), topk.end(), [](pair<int,int> a, pair<int,int> b) {
            return a.second > b.second;
        });

    
        for(int i=0;i < k ;i++){
            result.push_back(topk[i].first);
        }

        return result;





    }
};