class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        //approach 1: double for loop
        //need to return a int 
        //stones can be counted into a hash

        unordered_set<char> hashset; //with hashmap-unordered_set<char,int>
        int amount=0;

        for(char a : jewels){
            hashset.insert(a); 
            //with hashmap hashmap[a]++;
        }

        for(char b : stones){
            if(hashset.count(b)>=1){
                amount++;
            }
        }

        return amount;


    }
};