//Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

//You must do it in place.

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int i,j;
        int r = matrix.size();
        int c = matrix[0].size();
        int flagr=0, flagc=0;
        for(i=0;i<r;i++)
        {
            if(matrix[i][0]==0) flagr=1;
        }
        for(j=0;j<c;j++)
        {
            if(matrix[0][j]==0) flagc=1;
        }

        for(i=1;i<r;i++)
        {
            for(j=1;j<c;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for(i=1;i<r;i++)
        {
            for(j=1;j<c;j++)
            {
                if(matrix[i][0] ==0 || matrix[0][j] ==0)
                {
                    matrix[i][j] = 0;
                }
            }
        }

        if(flagr)
            for(i=0;i<r;i++)
            {
                matrix[i][0]=0;
            }
        if(flagc)
            for(j=0;j<c;j++)
            {
                matrix[0][j]=0;
            }
    }
};