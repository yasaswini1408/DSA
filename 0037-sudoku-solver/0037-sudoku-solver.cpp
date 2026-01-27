class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        bc(0,0,board);
    }
    bool bc(int i, int j, vector<vector<char>>&board){
        if(i==9) return true;
        if(j==9) return bc(i+1,0,board);
        if(board[i][j]!='.') return bc(i,j+1,board);
        for(int k='1';k<='9';k++){
            if(check(i,j,board,k)){
                board[i][j]=k;
                if(bc(i,j+1,board)) 
                    return true;
                board[i][j]='.';
            }
        }
        return false;
    }
    bool check(int i, int j,vector<vector<char>>&board,char k){
        for(int p=0;p<9;p++){
            if(board[i][p]==k||board[p][j]==k) return false;
        }
        int x=(i/3)*3;
        int y=(j/3)*3;
        for(int c=x;c<x+3;c++){
            for(int d=y;d<y+3;d++){
                if(board[c][d]==k) return false;
            }
        }
        return true;
    }
};