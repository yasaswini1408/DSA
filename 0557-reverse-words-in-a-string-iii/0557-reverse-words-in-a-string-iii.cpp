class Solution {
public:
    string reverseWords(string s) {
        vector<string>r;
        string p,k;
        for(auto i:s){ 
            if(i==' ') reverse(p.begin(),p.end()),r.push_back(p),p="";
            else p+=i;
        }
         reverse(p.begin(),p.end());
        r.push_back(p);
        for(auto i:r){
            k+=i;
            k+=' ';
        }
        k.pop_back();
        return k;

    }
};