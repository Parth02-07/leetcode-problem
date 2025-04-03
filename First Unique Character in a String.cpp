class Solution {
public:
    int firstUniqChar(string s) {
       map<char,int>p;
        for(char c:s){
            p[c]++;
        }
        for(int i=0;s[i]!='\0';i++){
            if(p[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};
