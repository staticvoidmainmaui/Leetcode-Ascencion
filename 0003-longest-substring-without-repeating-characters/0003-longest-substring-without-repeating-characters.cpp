class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //pattern to substring , sliding window , type of substring identification
        unordered_set<char> hashset;
        int longestlength=0;
        int l=0;

        for(int i=0; i < s.length(); i++){
            //i is the anchor for the start of substring checked
            int n=i; //n will track the substring length unrepeating substring, starting at the anchor i
            hashset.clear();
            l=0;



            while( hashset.count(s.at(n)) == 0){
                hashset.insert(s.at(n));
                l++;
                n++;
                if(n==s.length()) break; //length=8
            }

            if(l>longestlength){
                longestlength=l;
            }
        }
        return longestlength;
    }
};