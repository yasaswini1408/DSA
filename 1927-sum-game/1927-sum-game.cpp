class Solution{
public:
    bool sumGame(string num){
        int i=0,left=0,right=0,leftcnt=0,rightcnt=0;
        while(i<num.size()/2){
            if(num[i]!='?') left+=num[i]-'0';
            else leftcnt++;
            i++;
        }
        int j=num.size()/2;
        while(j<num.size()){
            if(num[j]!='?') right+=num[j]-'0';
            else rightcnt++;
            j++;
        }
        if(leftcnt==rightcnt){
            if(left!=right) return true;
            else return false;
        }
        if(2*(left-right)!=9*(rightcnt-leftcnt)) return true;
        else return false;
    }
};