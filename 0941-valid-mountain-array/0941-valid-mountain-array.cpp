class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int l=0;
        int r= arr.size()-1;
        while(l+1 < arr.size() && arr[l]< arr[l+1]) l++; //check before accessing
        while(r-1 >= 0 && arr[r] < arr[r-1]) r--;

        if(l==0) return false;
        if(r==arr.size()-1) return false;
        if(l!=r) return false;
        return true;
     }
};