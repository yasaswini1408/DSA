class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        // sort(arr.begin(),arr.end());
        // for (int i = 0; i < arr.size(); i++) {
        //     for (int j = i+1; j < arr.size(); j++) {
        //         if (__builtin_popcount(arr[i]) == __builtin_popcount(arr[j])) {
        //             if(arr[i]>arr[j]) swap(arr[i],arr[j]);
        //         }
        //         if (__builtin_popcount(arr[i]) > __builtin_popcount(arr[j])) {
        //             swap(arr[i], arr[j]);
        //         }
        //     }
        // }
        // return arr;

        
        vector<pair<int,int>> p;        
        for (int i = 0; i < arr.size(); i++) {
            p.push_back({arr[i], __builtin_popcount(arr[i])});
        }        
        sort(p.begin(), p.end(), [](pair<int,int> a, pair<int,int> b) {
            if (a.second == b.second)
                return a.first < b.first;
            return a.second < b.second;
        });        
        int j = 0;
        for (auto i : p) {
            arr[j] = i.first;
            j++;
        }        
        return arr;
    
    }
};