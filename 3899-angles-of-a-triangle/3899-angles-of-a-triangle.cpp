#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        int a=sides[0],b=sides[1],c=sides[2];
        if (a + b > c && b + c > a && a + c > b) {            
            double cosa = (b*b + c*c - a*a) / (2.0 * b * c);
            cosa = max(-1.0, min(1.0, cosa));
            cosa = acos(cosa) * 180.0 / M_PI;
            double cosb = (c*c + a*a - b*b) / (2.0 * a * c);
            cosb = max(-1.0, min(1.0, cosb));
            cosb = acos(cosb) * 180.0 / M_PI;
            double cosc = (a*a + b*b - c*c) / (2.0 * a * b);
            cosc = max(-1.0, min(1.0, cosc));
            cosc = acos(cosc) * 180.0 / M_PI;
            vector<double> r = {cosa, cosb, cosc};
            sort(r.begin(), r.end());
            return r;
        }else return {};
    }
};