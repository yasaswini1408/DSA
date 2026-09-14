class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int a=rec1[0],b=rec1[1],c=rec1[2],d=rec1[3];
        int p=rec2[0],q=rec2[1],r=rec2[2],s=rec2[3];

        if(a<r and p<c and b<s and q<d) return true;
        return false;
    }
};