class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int fuel=startFuel;
        int n=stations.size();
        priority_queue<int>p;
        int c=0,i=0;
        while(fuel<target){
            while(i<n and stations[i][0]<=fuel) p.push(stations[i][1]),i++;
            if(p.empty()) return -1;
            fuel+=p.top();
            p.pop();
            c++;
        }
        return c;
    }
};