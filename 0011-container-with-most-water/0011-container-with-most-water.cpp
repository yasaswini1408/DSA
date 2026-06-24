class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1,k=0;
        while(l<=r){
            k = max(k, min(height[l], height[r])*(r-l));
            if (height[l]<height[r]) l++;
            else r--;
        }
        return k;
    }
};