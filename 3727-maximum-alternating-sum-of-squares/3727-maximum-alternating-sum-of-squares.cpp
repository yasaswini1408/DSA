class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
       vector<long long> l;
        for(auto i: nums) l.push_back(1LL*i*i);
        sort(l.begin(),l.end());
        long long  p=0,q=l.size()-1;
        long long sco=0;
        bool z=true;
        while(p<=q){
            if(z){
                sco+=l[q];
                q--;
            }
            else{
                sco-=l[p];
                p++;
            }
            z=!z;
        }
        return sco;
    }
};