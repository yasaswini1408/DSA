class Solution {
public:
    bool checkOnesSegment(string s) {
        int k=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='1'){
                k=i;
                break;
            }
        }
        bool p=(find(s.begin(),s.begin()+k+1,'0')!=s.begin()+k+1);
        if(p) return false;
        return true;
    }
};