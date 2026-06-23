class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3) return false;
        //case 1 - increases then stalls then keeps going
        //case 2 - increases then decreases then keeps going
        //case 3 - decreases then increases
        //case 4 - increases then never descreas
        int peak=0;
        for(int i=0; i< arr.size();i++){
            if(arr[i]>=arr[peak]) peak=i;
        }
        if(peak==0 || peak==arr.size()-1 ) return false;

        for(int i =0; i < peak; i++){
            if(arr[i+1]<=arr[i]) return false;
        }
        for(int i =peak; i< arr.size()-1; i++){
            if(arr[i+1]>=arr[i]) return false;
        }

        return true;

    }
};