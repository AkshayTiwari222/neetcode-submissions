class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       
        unordered_map<string,vector<string>>resmap;
        for(string s:strs){
            string sortedstr= s;
            sort(sortedstr.begin(),sortedstr.end());
            resmap[sortedstr].push_back(s);

        }
        vector<vector<string>>result;
        for(auto& pair : resmap){
            result.push_back(pair.second);
        }
        return result;

    }
};
