//Given an m x n matrix, return all elements of the matrix in spiral order.
//Time Complexity: ( O(N \times M) ), where ( N ) is the number of rows and ( M ) is the number of columns. Each element is visited exactly once.
//Space Complexity: ( O(1) ) additional space (excluding the output list).

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int i;
        int r = matrix.size();
        int c = matrix[0].size();
        int top=0, bottom=r-1, left=0, right=c-1;

        while(top<=bottom && left<=right)
        {
            for(i=left;i<=right;i++)
            {
                res.push_back(matrix[top][i]);
            }
            top++;

            for(i=top;i<=bottom;i++)
            {
                res.push_back(matrix[i][right]);
            }
            right--;

            if(top<=bottom)
            {
                for(i=right;i>=left;i--)
                {
                    res.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if(left<=right)
            {
                for(i=bottom;i>=top;i--)
                {
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return res;
    }
};