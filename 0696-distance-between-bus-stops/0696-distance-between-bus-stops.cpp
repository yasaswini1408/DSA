class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) 
    {
        if(start>destination) swap(start,destination);
        int total=0;
        for(auto i:distance) total+=i;
        int clock=0;
        for(int i=start;i<destination;i++) clock+=distance[i];
        return min(clock,total-clock);
        
        // int d1=0;
        // int d2=0;
        // int x=start;
        // int n=distance.size();
        // while(start != destination){
        //     d1+=distance[start];
        //     start=(start+1)%n;
        // }
        // start=x;
        // while(start != destination){
        //     start=(start + (n-1)  )%n;
        //     d2+=distance[start];
        // }
        // return min(d1,d2);
    }
};