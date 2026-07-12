class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int hour1=stoi(startTime.substr(0,2));
        int hour2=stoi(endTime.substr(0,2));
        int min1=stoi(startTime.substr(3,2));
        int min2=stoi(endTime.substr(3,2));
        int sec1=stoi(startTime.substr(6,2));
        int sec2=stoi(endTime.substr(6,2));
        int total1=hour1*3600+min1*60+sec1;
        int total2=hour2*3600+min2*60+sec2;
        
        return abs(total1-total2);
    }
};