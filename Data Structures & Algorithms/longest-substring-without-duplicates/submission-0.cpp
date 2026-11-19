class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n= s.length();
        int i=0;
        unordered_set<char>st;
        int maxc=0;
        for(int j=0;j<s.length();j++){
            while(st.count(s[j])){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            maxc=max(maxc,j-i+1);
        }
        return maxc;
      
        
    }
};
