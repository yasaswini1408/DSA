class Solution {
public:
    bool isMonotonic(vector<int>& a) {
        int p=0,q=0;
        for(int i=0;i<a.size()-1;i++){
            if(a[i]<=a[i+1]) continue;
            else {
                p=1;
                break;
            }
        }
        for(int i=0;i<a.size()-1;i++){
            if(a[i]>=a[i+1]) continue;
            else{
                q=1;
                break;
            }
        }
        if(p==1 and q==1) return false;
        return true;
    }
};