class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result;
        int counter=0;
        for(int i=0;i<=rowIndex;i++){
            //result[i]=vector<int>(i+1);
            for(int j=0;j<=i;j++){
                // if(rowIndex==1){
                //     result.append(1);
                //     return result;
                // }
                if(j==0){
                    result.push_back(1);
                    counter++;
                }
                else if(j==i){
                    result.push_back(1);
                    counter++;
                }
                else{
                    result.push_back(result[counter-i-1]+result[counter-i]);
                    counter++;
                }
            }
            
        }

        return vector<int>(result.begin()+counter-rowIndex-1, result.end());
    }
};