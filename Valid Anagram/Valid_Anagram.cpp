class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> maps,mapt;
        if(s.size()!= t.size()){
            return false;
        }
        // unnordered_map<string,int> mapt;
        for(int i = 0;i<s.size();i++){
            maps[s[i]]++;
        }
        for(int i = 0;i<t.size();i++){
            mapt[t[i]]++;
        }
        return maps == mapt;
    }
};