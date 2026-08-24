class Solution {
public:
    string reverseWords(string s) {
        string result;
        int i = s.size() - 1;
        
        while (i >= 0) {
            while (i >= 0 && s[i] == ' ') i--;  
            if (i < 0) break;                 
            
            if (!result.empty()) result += ' ';   
            int spacer = result.size();            
            while (i >= 0 && s[i] != ' ') {
                result += s[i];
                i--;
            }
            reverse(result.begin() + spacer, result.end()); 
        }
        return result;
    }
};