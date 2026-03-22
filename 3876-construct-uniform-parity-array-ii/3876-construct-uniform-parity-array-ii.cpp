class Solution {
public:
    bool uniformArray(vector<int>& num) {
        int eve=0,odd=0;
        for(int i=0;i<num.size();i++){
            if(num[i]%2==0) eve++;
            else odd++;
        }
        if(eve==num.size() or odd==num.size()) return true;
        int mx=INT_MAX;
        for(auto i:num){
            if(i%2==1) mx=min(mx,i);
        }
        for(auto i:num){
            if(i%2==0){
                if(i-mx<1) return false;
            }
        }
        return true;
    }
};