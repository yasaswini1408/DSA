class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        //using monotonic stach and traversing from reverse
        stack<int>s;
        vector<int>r(t.size(),0);
        for(int i=t.size()-1;i>=0;i--){
            while(!s.empty() and t[i]>=t[s.top()]) s.pop();
            if(!s.empty()) r[i]=s.top()-i;
            s.push(i);
        }
        return r;
    }
};
