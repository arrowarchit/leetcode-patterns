//Given an m x n grid of characters board and a string word, return true if word exists in the grid.

//The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.



//Time complexity:
//O(m∗n∗4^l), where m and n are the dimensions of the grid and l is the length of the word. The 4^l factor represents the maximum number of recursive calls we may have to make for each starting cell.
//Space complexity:
//O(l), where l is the length of the word. The space complexity is primarily due to the recursive stack depth during the DFS traversal.

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int row=board.size();
        int col=board[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matched(board, word, i, j, 0))
                    return true;
            }
        }
        return false;
    }

    bool matched(vector<vector<char>>& board, string word, int i, int j, int k)  {
        int row=board.size();
        int col=board[0].size();

        if(k>=word.size()) return true;
        if(i<0 || j<0 || i>=row || j>=col) return false;
        if(board[i][j]!=word[k])return false;

        char tmp=board[i][j];
        board[i][j]='#';
        bool res=matched(board,word,i-1,j,k+1) || matched(board,word,i,j-1,k+1) || matched(board,word,i+1,j,k+1) || matched(board,word,i,j+1,k+1);
        board[i][j]=tmp;
        return res;
    }
};