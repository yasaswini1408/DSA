class Solution {
public:
    int minimumCost(vector<int>& cost) {
      if(cost.size()<=2) return accumulate(cost.begin(),cost.end(),0); 
      sort(cost.rbegin(),cost.rend());
      int c=0,i=0;
      while(i!=cost.size()){
        if((i+1)%3!=0) c+=cost[i];
        i++;
      } 
      return c;
    }
};