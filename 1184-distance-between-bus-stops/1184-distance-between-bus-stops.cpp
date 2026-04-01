class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int s1=0,s2=0;
        int n=distance.size();
        for(int i=start;i!=destination;i=(i+1)%n) s1+=distance[i];
        for(int i=start;i!=destination;i=(n-1+i)%n) s2+=distance[(n-1+i)%n];
        return min(s1,s2);
    }
};