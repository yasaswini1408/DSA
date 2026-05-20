class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_set<int>a,b;
        vector<int>res(A.size());
        for(int i=0;i<A.size();i++){
            int count=0;
            a.insert(A[i]);
            b.insert(B[i]);
            for(auto c:a){
                if(b.count(c)) count++;
            }
            res[i]=count;
        }
        return res;
    }
};