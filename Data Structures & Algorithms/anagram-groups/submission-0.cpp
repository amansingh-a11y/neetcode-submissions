class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>anagram;
        for(string s :strs){
            string temp= s;
         sort(s.begin(),s.end());
            anagram[s].push_back(temp);
        }
        vector<vector<string>>res;
        for(auto it:anagram){
            res.push_back(it.second);

        }
        return res;
        
    }
};
