class Solution {
public:
    bool checkOverlap(int radius, int xcenter, int ycenter, int x1, int y1, int x2, int y2) {
        int x = xcenter;
        int y = ycenter;
        if(xcenter < x1) x = x1;
        else if(xcenter > x2) x = x2;
        if(ycenter < y1) y = y1;
        else if(ycenter > y2) y = y2;
        if((xcenter-x)*(xcenter-x)+(ycenter-y)*(ycenter-y) <= radius*radius)
            return true;

        return false;
    }
};