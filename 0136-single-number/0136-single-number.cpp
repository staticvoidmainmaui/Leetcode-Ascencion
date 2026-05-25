class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        std::unordered_map<int, int> freq;
        freq.reserve(nums.size());   //performance optimizations 

        for (int x : nums) {
            ++freq[x];
        }

        for (const auto& [key, count] : freq) {  //explain 
            if (count == 1) return key;
        }

        return -1; // should not happen if input guarantees a solution
    }
};
