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


        //optimal 

        int m1=INT_MIN, m2= INT_MIN, m3= INT_MIN;
        for(int n:nums){
            if(n==m1 || n==m2 || n==m3) continue;
            if(n>m1) { m3=m2; m2=m1; m1=n;}
            else if(n>m2) { m3=m2; m2=n; }
            else if(n>m3) { m3=n; }
            
        }
        return m3==INT_MIN ? m1 : m3; //if third never set then never found and return m1 max if not return m3 ... 
    }
};