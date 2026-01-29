class Solution{
public:
    bool solve(int i,int j,int tar,vector<vector<int>>& a){
        if(i>=a.size()||j>=a.size()||i<0||j<0||a[i][j]!=tar)
            return false;
        if(tar==(a.size()*a.size())-1)
            return true;
        bool d1=solve(i-2,j+1,tar+1,a);
        bool d2=solve(i-2,j-1,tar+1,a);
        bool d3=solve(i+2,j+1,tar+1,a);
        bool d4=solve(i+2,j-1,tar+1,a);
        bool d5=solve(i+1,j+2,tar+1,a);
        bool d6=solve(i-1,j+2,tar+1,a);
        bool d7=solve(i+1,j-2,tar+1,a);
        bool d8=solve(i-1,j-2,tar+1,a);
        return(d1||d2||d3||d4||d5||d6||d7||d8);
    }
    bool checkValidGrid(vector<vector<int>>& grid){
        if(!solve(0,0,0,grid))
            return false;
        return true;
    }
};
