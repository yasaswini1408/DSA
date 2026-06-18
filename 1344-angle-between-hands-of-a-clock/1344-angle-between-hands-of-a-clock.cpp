class Solution {
public:
    double angleClock(int hour, int minutes) {
        double diff= abs(30.0* hour- 11.0*minutes/2.0);
        return min(diff,360.0-diff);
    }
};