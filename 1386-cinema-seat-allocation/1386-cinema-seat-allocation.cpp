class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,vector<bool>>m;
        for(auto i:reservedSeats){
            m[i[0]].resize(10,false);
            m[i[0]][i[1]-1]=true;
        }
        int res=2*n;
        for(auto i:m){
            int x=0,y=0,z=0;
            for(int p=1;p<5;p++){
                if(i.second[p]) x=1;
            }
            for(int p=3;p<7;p++){
                if(i.second[p]) y=1;
            }
            for(int p=5;p<9;p++){
                if(i.second[p]) z=1;
            }
            if(x==0&&z==0) res+=0;
            else if(x==0||y==0||z==0) res-=1;
            else res-=2;
        }
        return res;
    }
};