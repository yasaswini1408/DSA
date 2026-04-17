class Solution {
public:
    int reverse_digits(int n){
        int val = 0;        
        while(n){
            val = val * 10 + n%10;
            n = n/10;
        }
        return val;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        int ans = n;
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!=mp.end()){
                ans = min(ans,i-mp[nums[i]]);
            }
            int val = reverse_digits(nums[i]);
            mp[val] = i;
        }
        return (ans==n ? -1 : ans);
    }
};





// class Solution {
// public:
//     int reverse(int n) {
//         int rev = 0;
//         while (n > 0) {
//             rev = rev * 10 + (n % 10);
//             n /= 10;
//         }
//         return rev;
//     }

//     int minMirrorPairDistance(vector<int>& n) {
//         int r=INT_MAX,z;
//         for(int i=0;i<n.size();i++){
//             for(int j=i+1;j<n.size();j++){
//                 int p=n[i];
//                 int q=reverse(n[j]);
//                 if(p==q||n[j]==reverse(n[i])) {
//                     r=min(r,j-i);
//                 }
//             }
//         }
//         return (r == INT_MAX) ? -1 : r;
//     }
// };