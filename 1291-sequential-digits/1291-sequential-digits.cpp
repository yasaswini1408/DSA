class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> a;
        int x=to_string(low).size();
        int y=to_string(high).size();
        for(int len=x;len<=y;len++){
            for(int s=1;s<=10-len;s++){
                int n=0,d=s;
                for(int i=0;i<len;i++){
                    n=n*10+d;
                    d++;
                }
                if(n>=low && n<=high)a.push_back(n);
            }
        }
        return a;
    }
};