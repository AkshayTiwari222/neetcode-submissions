class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.size();
        if (s1.size() > s2.size()) {
            return false;
        }

        vector<int> cnt1(26, 0);
        vector<int> cnt2(26, 0);

        // 1. Count s1
        for (int z = 0; z < k; z++) {
            cnt1[s1[z] - 'a']++;
        }

        // 2. Count the first window of s2 (indices 0..k-1)
        for (int j = 0; j < k; j++) {
            cnt2[s2[j] - 'a']++;
        }

        // 3. Check the first window
        if (cnt1 == cnt2) {
            return true;
        }

        // 4. Slide the window
        for (int j = k; j < s2.size(); j++) {
            cnt2[s2[j] - 'a']++;        // char entering at position j
            cnt2[s2[j - k] - 'a']--;    // char leaving at position j - k
            if (cnt2 == cnt1) return true;
        }

        // 5. No window matched
        return false;
    }
};