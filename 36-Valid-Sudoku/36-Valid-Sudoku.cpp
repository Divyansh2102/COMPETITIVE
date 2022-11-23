class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string>st;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    string row="row";
                    row+=i;
                    row+=board[i][j];

                    string column="column";
                    column+=j;
                    column+=board[i][j];

                    int Box=(i/3)*3+(j/3);
                    string box="box";
                    box+=Box;
                    box+=board[i][j];
                    if(st.count(row) || st.count(column) || st.count(box))
                        return false;
                    else{
                        st.insert(row);
                        st.insert(column);
                        st.insert(box);
                    }
                }
            }
        }
        return true;
    }
};