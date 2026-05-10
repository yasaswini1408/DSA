class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score = 0, count = 0;
        for (auto i : events) {
            if (count == 10) break;
            if (i == "0" or i == "1" or i == "2" or i == "3" or i == "4" or i == "6") score += stoi(i);
            else if (i == "W") count++;
            else if (i == "WD") score++;
            else if (i == "NB") score++;
        }
        return {score, count};
    }
};