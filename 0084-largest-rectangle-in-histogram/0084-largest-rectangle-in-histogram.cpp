class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int>nse,pse;
        vector<int>r(h.size(),h.size());
        for(int i=h.size()-1;i>=0;i--){
            while(!nse.empty() and h[nse.top()]>=h[i]) nse.pop();
            if(!nse.empty()) r[i]=nse.top();
            nse.push(i);
        }
        vector<int>r2(h.size(),-1);
        for(int i=0;i<h.size();i++){
            while(!pse.empty() and h[pse.top()]>=h[i]) pse.pop();
            if(!pse.empty()) r2[i]=pse.top();
            pse.push(i);
        }
        int ma=INT_MIN;
        for(int i=0;i<h.size();i++){
            ma=max(ma,h[i]*(r[i]-r2[i]-1));
        }
        return ma;
    }
};