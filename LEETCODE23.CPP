class Solution {
public:
    void getToken(vector<string>&v , string sentence){
        stringstream ss(sentence);
        string token;
        while(ss >> token){
            v.push_back(token);
        }
    }   
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> v;   
        int n = searchWord.length();
        getToken(v,sentence);
        int res = 0;
        for(int i = 0;i<v.size();i++){
            string ans = v[i];
            string match = ans.substr(0,n);
            if(searchWord == match){
                res = i + 1;
                return res;
            }
        }
        return -1;
    }
};