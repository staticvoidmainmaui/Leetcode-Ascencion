class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int k=0;
        vector<int> expected=heights;
        sort(expected.begin(),expected.end());

        for(int i=0;i<=heights.size()-1;i++){
        if(heights[i]!=expected[i]) k++;
        }
        return k;
    }
};