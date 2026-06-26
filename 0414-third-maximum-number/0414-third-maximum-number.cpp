class Solution {
public:
    int thirdMax(vector<int>& nums) {
        //could save an array of distinct number and either pull the third or the last , have o(n) memory and display third or max

        vector<int> distinctmax;
        unordered_set<int> hashset;
        for(int i=0;i<nums.size();i++){
            if(hashset.count(nums[i])==0){
                hashset.insert(nums[i]);
                distinctmax.push_back(nums[i]);
            }

        }
        sort(distinctmax.begin(), distinctmax.end(), greater<int>());

        if(distinctmax.size()<3){
            return distinctmax[0];
        } else return distinctmax[2];

        // unordered_map<int,int> hashmap;  //nums[i]- > count
        // for(int i=0; i<=nums.size()-1;i++){
        //         hashset[num[i]]++;
        // }
        // if(hashmap.size()<3) return hashmap[]
        // int k = 0;
        // for(auto a : hashmap){
        //     if(k==3) return a.first;
        //     k++;
        // }
        //unordered map would not work , with keys coming out in a random order so no traversal to find the third largest 

        //number of time its more than a number then after that loop return the third biggest count - 2 loops , o(n+3)=o(n) 
    }
};