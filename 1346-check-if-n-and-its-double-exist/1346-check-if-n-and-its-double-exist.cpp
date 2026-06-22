class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<double> hashset;

        for(int i =0; i<arr.size();i++){
            if(hashset.count((double) 2*arr[i])){
                return true;
            } else if(hashset.count((double)arr[i]/2)){
                return true;
            }else{
                hashset.insert((double) arr[i]);
                //hashset.insert(2*arr[i]);
            }
        }
        return false;
    }
};