class Solution {
public:
    int compress(vector<char>& chars) {
        int write=0;
        int i=0;
        while(i<chars.size()){
            int c=0;
            char curr=chars[i];
            while(i<chars.size() and chars[i]==curr){
                c++;
                i++;
            }
            chars[write]=curr;
            write++;
            if(c>1){
                string count=to_string(c);
                for(auto i:count){
                    chars[write]=i;
                    write++;
                }
            }

        }
        return write;
    }
};