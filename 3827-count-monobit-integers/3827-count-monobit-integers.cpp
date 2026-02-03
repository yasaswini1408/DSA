class Solution {
public:
    int countMonobit(int n) {
        bitset<32>a(n);
        int c=0;
        for(int i=0;i<=n;i++){
            if(i==0||(i&(i+1))==0) c++;
        }
        return c;
    }
};