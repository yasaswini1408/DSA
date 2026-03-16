class Solution {
public:
    vector<int> closestDivisors(int num) {
        int p = num + 1;
        int q = num + 2;
        int mi = INT_MAX;
        vector<int> ans(2);
        for(int i = 1; i <= sqrt(p); i++){
            if(p % i == 0){
                int a = i;
                int b = p / i;
                if(abs(a - b) < mi){
                    mi = abs(a - b);
                    ans = {a, b};
                }
            }
        }
        for(int i = 1; i <= sqrt(q); i++){
            if(q % i == 0){
                int a = i;
                int b = q / i;
                if(abs(a - b) < mi){
                    mi = abs(a - b);
                    ans = {a, b};
                }
            }
        }
        return ans;
    }
};