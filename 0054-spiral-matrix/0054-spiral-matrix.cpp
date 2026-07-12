class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int matlength = matrix.size()*matrix[0].size();
        int mstart = 0 ; //boundary for column
        int nstart = 0 ;//boundary for row
        int mend = matrix[0].size()-1; //boundary for column
        int nend = matrix.size()-1; //boundary for row

        vector<int> result(matlength);
        int col=0 , row=0;
        int direction=1;


        for(int i=0; i < matlength ; i++ ){
            result[i]= matrix[row][col];
            if(direction==1){
                if(col!=mend) col++;
                else if(row!=nend) row++;
                else {col--;direction=direction*-1; nend--; mend--; nstart++;}
            } else if(direction==-1){
                if(col!=mstart) col--;
                else if(row!=nstart) row--;
                else {col++; direction=direction*-1; mstart++;}
            }
        }
        return result;
    }
};