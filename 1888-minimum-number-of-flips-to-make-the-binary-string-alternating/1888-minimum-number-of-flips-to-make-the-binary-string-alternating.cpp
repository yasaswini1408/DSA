class Solution {
public:
    // int countflips(string s){
    //     int c=0;
    //     if(s[0]=='1'){
    //         for(int i=0;i<s.size();i++){
    //             if(i%2==0 and s[i]!='1') c++;
    //             else if(i%2!=0 and s[i]!='0') c++;
    //         }
    //     }else{
    //         for(int i=0;i<s.size();i++){
    //             if(i%2==0 and s[i]!='0') c++;
    //             else if(i%2!=0 and s[i]!='1') c++;
    //         }
    //     }
    //     return c;
    // }

    // int countflips(string s) {
    //     int c1 = 0, c2 = 0;
    //     for (int i = 0; i < s.size(); i++) {
    //         if (i % 2 == 0) {
    //             if (s[i] != '0') c1++;
    //             if (s[i] != '1') c2++;
    //         } else {
    //             if (s[i] != '1') c1++;
    //             if (s[i] != '0') c2++;
    //         }
    //     }
    //     return min(c1, c2);
    // }
    int minFlips(string s) {
        // string orig=s;
        // int count=INT_MAX,c=0;
        // do{
        //     c=countflips(s);
        //     count=min(count,c);
        //     s.push_back(s[0]);
        //     s.erase(s.begin());
        //     // c=countflips(s);
        //     // count=min(count,c);
        // }while(s!=orig);

        // return count;

        // int n = s.size();
        // string t = s + s;
        // int ans = INT_MAX;
        // for (int i = 0; i < n; i++) {
        //     string cur = t.substr(i, n);
        //     int c = countflips(cur);
        //     ans = min(ans, c);
        // }
        // return ans;

        int n = s.size();
        string t = s + s;
        int ans = n;
        int mis0 = 0;
        for (int i = 0; i < 2 * n; i++) {
            char expected = (i % 2 == 0) ? '0' : '1';
            if (t[i] != expected) mis0++;
            if (i >= n) {
                int left = i - n;
                char exp_left = (left % 2 == 0) ? '0' : '1';
                if (t[left] != exp_left) mis0--;
            }
            if (i >= n - 1) {
                int mis1 = n - mis0;
                ans = min(ans, min(mis0, mis1));
            }
        }
        return ans;
    }
};