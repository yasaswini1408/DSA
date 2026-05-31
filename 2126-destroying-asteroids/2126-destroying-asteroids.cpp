class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& ast) {
        sort(ast.begin(),ast.end());
        long long k=mass,i;
        for(i=0;i<ast.size();i++){
            if(k>=ast[i]) k+=ast[i];
            else break;
        }
        if(i==ast.size())return true;
        else return false;
    }
};