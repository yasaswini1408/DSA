class NumMatrix {
public:
vector<vector<int>>a;

    NumMatrix(vector<vector<int>>& matrix) {
        a=matrix;
        for(int i=0;i<a.size();i++){
            int s=matrix[i][0];
            for(int j=1;j<a[0].size();j++){
                s+=a[i][j];
                a[i][j]=s;
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int s=0;
        for(int i=row1;i<=row2;i++){
            if(col1==0) s+=a[i][col2];
            else s+=a[i][col2]-a[i][col1-1];
        }
        return s;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */