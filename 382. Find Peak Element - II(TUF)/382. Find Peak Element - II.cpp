class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int Bestrow = 0;
        int Bestcol = 0;

        for (int row = 0; row < static_cast<int>(mat.size()); row++) {
            for (int col = 0; col < static_cast<int>(mat[0].size()); col++) {
                if (mat[row][col] > mat[Bestrow][Bestcol]) {
                    Bestrow = row;
                    Bestcol = col;
                }
            }
        }

        return {Bestrow, Bestcol};
        
    }
};