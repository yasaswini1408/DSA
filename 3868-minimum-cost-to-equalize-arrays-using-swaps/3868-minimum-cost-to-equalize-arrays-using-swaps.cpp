class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m1,m2,r;
        for(int i=0;i<nums1.size();i++){
            m1[nums1[i]]++;
            m2[nums2[i]]++;
            r[nums1[i]]++;
            r[nums2[i]]++;
        }
        for(auto i:r){
            if(i.second%2!=0) return -1;
        }
        int c=0;
        for(auto i:r){
            int x=i.first;
            c+=abs(m1[x]-m2[x])/2;
        }
        return c/2;
    }
};