class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(string &s:strs){
            encoded += to_string(s.length());
            encoded +='#';
            encoded += s;

        }
        return encoded;

    }

    vector<string> decode(string s) {
        vector<string> result;
        int i=0;
        int n = s.length();
         while (i < n) {
        int len = 0;

        // Extract the length
        while (s[i] != '#') {
            len = len * 10 + (s[i] - '0');
            i++;
        }

        i++; // skip '#'

        // Extract the actual string using the length
        string temp = s.substr(i, len);
        result.push_back(temp);

        i += len;
    }

    return result;

    }
};
