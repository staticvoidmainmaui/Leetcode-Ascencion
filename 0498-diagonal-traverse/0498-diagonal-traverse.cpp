class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> diag;
        //00 //sum=0
        //01 and 10 sum=1
        //20 11 and 02 sum=2
        //12 and 21 sum=3
        //22 sum=4
       if (mat.empty() || mat[0].empty()) return {};
       int m = mat.size(), n = mat[0].size();
       int row =0, col=0;


       for(int i=0; i< m*n; i++) {
        diag.push_back(mat[row][col]);
        if((row+col ) % 2 ==0 ){
            if(col == n-1) row++;
            else if( row ==0) col++;
            else { row-- ; col++;}
        } else if((row+col ) % 2 !=0 ){
            if(row ==m-1) col++;
            else if(col==0) row++;
            else { row++ ; col--;}
        }


       }
       return diag;

    }
};