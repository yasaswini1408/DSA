class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        long long i=0,k=0;
        while(coins!=0 and i<costs.size()){
            if(costs[i]<=coins){
                k++;
                coins-=costs[i];
            }else break;
            i++;
        }
        return k;
    }
};