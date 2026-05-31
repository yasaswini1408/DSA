class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        vector<int> st;
        for(int i = 0; i < n; i++){
            bool destroyed_top = false;
            if(!st.empty() && (asteroids[i] < 0 && st.back() > 0)){
                while(!st.empty() && (asteroids[i] < 0 && st.back() > 0)){
                    if(st.back() < abs(asteroids[i])) st.pop_back();
                    else if(st.back() == abs(asteroids[i])){
                        st.pop_back();
                        destroyed_top = true;
                        break;
                    }
                    else{
                        destroyed_top = true;
                        break;
                    }
                }
                if(!destroyed_top) st.push_back(asteroids[i]);
            }
            else st.push_back(asteroids[i]);
        }
        return st;
    }
};