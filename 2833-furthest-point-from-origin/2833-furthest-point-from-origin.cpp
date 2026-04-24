class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=count(moves.begin(),moves.end(),'L');
        cout<<l<<endl;
        int r=count(moves.begin(),moves.end(),'R');
        if(l>r){
            for(int i=0;i<moves.size();i++){
                if(moves[i]=='_') moves[i]='L';
            }
        }else{
            for(int i=0;i<moves.size();i++){
                if(moves[i]=='_') moves[i]='R';
            }
        }
        int s=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L') s--;
            else s++;
        }
        return abs(s);
    }
};