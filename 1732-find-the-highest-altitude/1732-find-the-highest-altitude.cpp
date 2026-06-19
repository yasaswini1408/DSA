class Solution {
public:
    int largestAltitude(vector<int>& arr) {
        vector<int>res(arr.size(),0);
        int p=0;
        for(int i=0;i<arr.size();i++){
            p=p+arr[i];
            res[i]=p;
        }
        for(auto i:res) cout<<i<<" ";
        return max(0,*max_element(res.begin(),res.end()));
    }
};