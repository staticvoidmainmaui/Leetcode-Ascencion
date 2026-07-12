class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       //case of last integer
       int lastdigit=digits.size()-1; //last 9
       //12  1 3
       //9  1 0
       //19 - 2 0
       //99 -> 1 0 0
       //91 -> 92
       while(digits[lastdigit]==9){
        if(lastdigit==0) {
            digits.push_back(0);
            digits[lastdigit] = 1;
            return digits;
        }
            digits[lastdigit--] = 0;
        }
       digits[lastdigit]++;
       return digits;
    }
};