class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        
        unordered_map<string,vector<string>> hashmap;
        string key="";
        for(auto a : strs){
            key = a ;
            sort(key.begin(), key.end());
            hashmap[key].push_back(a);
        }

        for(auto element : hashmap){
            result.push_back(element.second);
        }
        // for(auto [key,group] : hashmap){
        //     result.push_back(group));
        // }
        return result;

    }
};