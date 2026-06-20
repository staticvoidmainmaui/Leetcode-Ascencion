class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int count = 0;
        for(int i=0;i<arr.size() ; i++){
            if(arr[i]==0) count++;
        }
        //approach from python for every 0( count), there is gonna be a duplicate
        //(1) - the arr[size+count] might be bigger than the array size dont change these
        //(2) - as we adda 0 we need to replace the added count to the original place , so arr[4] would now be at a[8] if theres a count of 4 zeroes , arr[8] has value at arr[4].
        //(3) - duplicat the zeroes in place as encounter by subtracting a zero from count seen, so arr[size+count] would place one right before at arr[size+count-1]
        for(int m = arr.size()-1 ; m >=0 ; m--){ //1 1 1 0 3 -> 1 1 1 0 0 
            if(m+count < arr.size()) arr[m+count]=arr[m]; //arr.size() stays constant

            if(arr[m]==0){
                count--;
                if(m+count < arr.size())  arr[m+count]=0;
            }
        }
    }
};