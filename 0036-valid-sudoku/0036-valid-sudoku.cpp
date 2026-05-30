class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //returns bool
        //9 by 9 board where i iterates through the rows and j iterates through the columns in that row 
        //[i[j] is our key whos value is the the number of the cell we are accesing
        //hashmap.count[i[j]] is the ccurances
        //hashmap[i[j]]
        //board[i][j] is the number valueo

        //updating the hashmap? , yes adding a number for everytime its seen hence adding an occurance
        // iterating through map? no
        //reading from map ? yes, we count the .second in hashmap pair

        //approach 1: 
        // unordered_map<char , int> hashmap; //number-> occurances
        
        // for(int i=0;i< board.size(); i++){
        //     hashmap.clear(); //needed for inside for loop
        //     for(int j=0; j< board[i].size(); j++){
        //         if(board[i][j] == '.') continue;
        //         if(hashmap.count(board[i][j]) > 0 )
        //             return false;
        //         }
        //         hashmap[i][j]++;
        //     }
        // }
        // return true;

        //APproach 2:
        //rows[i], is the row # , the number at (board[i][j] is inserted into the ordered set hosted at that row number)
        //columsn[j] is column number
        //box is the box number calculated at the start of each check

        unordered_map<int, unordered_set<char>> rows, columns, boxes; //3 maps
        for(int i=0; i < 9 ; i++ ){
            for(int j=0; j < 9; j++){
                char val= board[i][j];
                if(val =='.') continue;

                int box = (i/3) *3 + (j/3);
                if(rows[i].count(val) || columns[j].count(val) || boxes[box].count(val))    return false; //row #1 with set with 2 is checked to see if value TO insert was already there

                rows[i].insert(val); //essentially row #1 , now contains a set with 2 , 
                columns[j].insert(val);
                boxes[box].insert(val);
            }
        }
        return true;

    }
};