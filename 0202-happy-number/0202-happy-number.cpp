class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> hashset; //hash tables with values
        // if(n==1) return true;
        int newsum=0;
        // hashset.insert(n); //store 19 - original number
        
        
        
        while(newsum!=1){
            newsum=0;
            while(n!=0){
            newsum += (n%10) * (n%10);
            n=n/10; 
            }
            
            if(hashset.count(newsum)){ //newsum is 0 on iteration
                return false;
            }
            
            n=newsum;
            hashset.insert(n);
        }
        return true;
        
    }
};