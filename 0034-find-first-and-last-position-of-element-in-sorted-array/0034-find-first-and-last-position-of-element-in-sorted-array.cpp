class Solution {
public:
    int focc(vector<int>&a,int t){
        int l=0;
        int h=a.size()-1,ans=-1;
        while(l<=h){
            int m=(l+h)/2;
            if(t==a[m]){
                ans=m;
                h=m-1;
            }else if(t<a[m]){
                h=m-1;
            }else l=m+1;
        }
        return ans;
    }
    int locc(vector<int>&a,int t){
        int l=0;
        int h=a.size()-1,ans=-1;
        while(l<=h){
            int m=(l+h)/2;
            if(t==a[m]){
                ans=m;
                l=m+1;
            }else if(t<a[m]){
                h=m-1;
            }else l=m+1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=focc(nums,target);
        int r=locc(nums,target);
        return {l,r};
    }
};