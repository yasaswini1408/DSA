class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size(),l=0,r=0,m_l=0;
        map<int,int>m;
        while(r<n){
            m[fruits[r]]++;
            if(m.size()>2){
                while(m.size()>2){
                    m[fruits[l]]--;
                    if(m[fruits[l]]==0) m.erase(fruits[l]);
                    l++;
                }
            }
            else if(m.size()<=2) m_l=max(m_l,r-l+1);
            r++;
        }
        return m_l;
    }
};