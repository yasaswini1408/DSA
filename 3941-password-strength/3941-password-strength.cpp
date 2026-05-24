class Solution {
public:
    int passwordStrength(string password) {
        set<char>s;
        for(auto i:password) s.insert(i);
        int c=0;
        for(auto i:s){
            if(i>='a' and i<='z') c+=1;
            else if(i>='A' and i<='Z') c+=2;
            else if(i>='0' and i<='9') c+=3;
            else c+=5;
        }
        return c;
    }
};