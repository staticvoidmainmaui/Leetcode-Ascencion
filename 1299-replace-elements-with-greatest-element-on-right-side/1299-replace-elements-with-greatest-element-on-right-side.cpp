class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        // [17,18,5,4,6,1]
        vector<int> copy=arr;
        

        int biggest=arr.size()-1;
        for(int i=arr.size()-2; i>=0;i--){  
            
            if(copy[i+1]<=copy[biggest]) {  
                arr[i]=copy[biggest]; 
            } else if(copy[i+1]>copy[biggest]){
                biggest=i+1; 
                arr[i]=copy[biggest];
            }
            // if(arr[i-1]>=copy[k]){
            //     k=i;
            // } else{
            //     arr[i-1]==copy[k];
            // }
        }
        arr[arr.size()-1]=-1;
        return arr;

        // //different solution
        // int maxRight=-1;
        // for(int i= arr.size()-1;i>=0;--i){
        //     int newMax= max(maxRight, arr[i]);
        //     //int cur=arr[i]; not even needed as max val of integers considered would be in newMax
        //     arr[i]=maxRight;
        //     maxRight= newMax;
        // }

        // return arr;



    }
};