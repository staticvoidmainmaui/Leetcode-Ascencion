class Solution {
public:
    int strStr(string haystack, string needle) {
        //sliding window lets anchor the start of the character of needle and iterate until found
        int k=haystack.length();
        int l=needle.length();

        for(int i=0; i+l <= k ; i++ ){
            string s=haystack.substr(i,l);
            if(s==needle) return i;
        }
        return -1;
    }
};