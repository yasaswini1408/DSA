class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int l=1,r=1;
        while(r<arr.size()){
            if(arr[r]!=arr[r-1]){
                arr[l]=arr[r];
                l++;
            }
            r++;
        }
        // for(auto i:arr) cout<<i<<" ";
        return l;
    }
};