class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int k=0;
        vector<int>lmax(n,0);
        vector<int>rmax(n,0);
        lmax[0]=height[0];
        rmax[n-1]=height[n-1];
        for(int i=1;i<n;i++) lmax[i]=max(lmax[i-1],height[i]);
        for (int i=n-2;i>=0;i--) rmax[i]=max(rmax[i+1],height[i]);
        for (int i=0;i<n;i++) k+=min(lmax[i],rmax[i])-height[i];
        return k;                                                        

        // int c=0;
        // for(int i=1;i<height.size()-1;i++){
        //     int maxi=*max_element(height.begin(),height.begin()+i+1);
        //     int mini=*max_element(height.begin()+i,height.end());
        //     int l=min(maxi,mini)-height[i];
        //     if(l>0)
        //     c+=l;
        // }
        // return c;
    }
};