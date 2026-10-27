class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>>row(9);
        vector<unordered_set<char>>column(9);
        vector<unordered_set<char>> boxes(9);
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                if(board[r][c]=='.'){
                    continue;
                }
               int  b= (r / 3) * 3 + (c / 3);
               char d =board[r][c];

               if (row[r].count(d) || column[c].count(d) || boxes[b].count(d)) return false;
               else{
                row[r].insert(d);
                column[c].insert(d);
                boxes[b].insert(d);
               }
            }
        }
        return true;

        
    }
};
