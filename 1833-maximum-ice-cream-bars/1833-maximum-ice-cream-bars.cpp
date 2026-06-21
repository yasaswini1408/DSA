class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        vector<int> count(100001, 0);
        for (int cost : costs) {
            count[cost]++;
        }
        int res = 0;
        for (int price = 1; price <= 100000; price++) {
            while (count[price] > 0 && coins >= price) {
                coins -= price;
                res++;
                count[price]--;
            }
            if (coins < price) break;
        }
        return res;
    }
};