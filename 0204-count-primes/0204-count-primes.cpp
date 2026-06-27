class Solution {
public:
    int countPrimes(int n) {
        if(n<=1) return 0;
        vector<bool>v(n,true);
        v[0]=false;
        v[1]=false;
        int c=0;
        for(int i=2;i<=sqrt(n);i++){
            if(v[i]){
                for(int j=i*i;j<n;j+=i){
                    v[j]=false;
                }
            }
        }
        for(auto i:v) if(i) c++;
        return c;
    }
};

// class Solution {
// public:
// bool isPrime(int n){
//     int c=0;
//     if(n==1) return false;
//         for(int i=2;i<=sqrt(n);i++){
//             if(n%i==0) return false;
//         }
//         return true;
// }
//     int countPrimes(int n) {
//         int k=0;
//         for(int i=1;i<n;i++){
//             if(isPrime(i)) k++;
//         }
//         return k;
//     }
// };