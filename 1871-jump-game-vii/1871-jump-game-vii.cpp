class Solution {
public:
    bool canReach(string s,int minJump,int maxJump) {
        if(s[s.size()-1]!='0') return false;
        int n=s.size();
        vector<bool>res(n,false);
        vector<int>suff(n+1,0);
        res[n-1]=true;
        suff[n-1]=1;
        for(int i=n-2;i>=0;i--){
            if(s[i]=='0'){
                int l=i+minJump;
                int r=min(i+maxJump,n-1);
                if(l<=r){
                    int cnt=suff[l]-suff[r+1];
                    if(cnt>0) res[i]=true;
                }
            }
            suff[i]=suff[i+1]+(res[i]?1:0);
        }
        return res[0];
    }
};