class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        unordered_set<int> col;
        unordered_set<int> row;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++ ){
                if(matrix[i][j]==0){
                    col.insert(j);
                    row.insert(i);
                    cout<<i<<" "<<j<<endl;
                }
            }
        }

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(row.count(i)!=0 || col.count(j)!=0)matrix[i][j]=0;
            }

        }
    }
};
