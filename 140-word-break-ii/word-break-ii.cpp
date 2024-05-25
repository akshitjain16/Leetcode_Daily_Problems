class Solution {
public:
    set<string> dict;
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        for(auto x : wordDict)dict.insert(x);
        vector<string> result;
        rec(s, 0, "", result);
        return result;
    }

    void rec(string s, int beg, string cur, vector<string>& result) {
        if(beg==s.size()) {
            if(cur[0]==' ')cur = cur.substr(1);
            result.push_back(cur);
        }
        string temp = "";
        for(int i=beg;i<s.size();i++) {
            temp.push_back(s[i]);
            if(dict.count(temp)) {
                rec(s, i+1, cur + " " + temp, result);
            }
        }
    }
};