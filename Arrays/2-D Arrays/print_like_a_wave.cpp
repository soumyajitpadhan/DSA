vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int>ans;
    for(int col = 0; col < mCols; col++) {
        
        if( col&1 )
        {
            //odd index -> Bottom to top
            for(int row = nRows - 1; row >= 0; row--)
            {
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            //0 or even index -> Top to buttom
            for(int row = 0; row < nRows; row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
//T.C = O(nm); here n = row, m = col.
