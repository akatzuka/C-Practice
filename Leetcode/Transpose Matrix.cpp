class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int row = A.size();
        int col = A[0].size();
        vector<vector<int>> Tram(col);

        for(int i = 0; i < col; i++)
        {
            Tram[i].resize(row);
        }

        for(int x = 0; x < row; x++)
        {
            for(int y = 0; y < col; y++)
            {
                Tram[y][x] = A[x][y];
            }
        }
        return Tram;
    }
};
