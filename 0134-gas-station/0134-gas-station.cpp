class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int p=accumulate(gas.begin(),gas.end(),0);
        int q=accumulate(cost.begin(),cost.end(),0);
        if(q>p) return -1;
        int r=0,s=0;
        for(int i=0;i<gas.size();i++){
            s+=gas[i]-cost[i];
            if(s<0){
                s=0;
                r=i+1;
            }
        }
        return r;
    }
};