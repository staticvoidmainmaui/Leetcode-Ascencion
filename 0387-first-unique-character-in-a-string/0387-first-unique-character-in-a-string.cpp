class Solution {
public:
    int firstUniqChar(string s) {
        //returning a integer, index of non repeating or -1 if not
        //our map has the char to check as the key AND the amount of occurances as value
        //count occurnaces as lookuo instead???
        //s[i] is the current char we check and the key of hashmap - hashmap[key] = 
        //the value of hashmap[s[i]] is the occurances
        //hashmap.count[], checks the char
        //
        
        unordered_map<char, int> hashmap;
        for(int i=0; i<s.length(); i++){
            hashmap[s[i]]= hashmap[s[i]]+1; //or hashmap[s[i]] +=1;
        }
    
        // for(it= hashmap.begin ; i< hashmap.end; i++){
        //     if(it=1) return hashmap[i];
        // }
        
        //no need for iterator loop 
        for(int i = 0; i < s.length(); i++) {
            if(hashmap[s[i]] == 1 ) return i;
        }

        return -1;
    }
};