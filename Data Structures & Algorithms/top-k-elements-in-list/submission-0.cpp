class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        
        // 1. Count frequencies
        unordered_map<int, int> countMap;
        for (int num : nums) {
            countMap[num]++;
        }
        
        // 2. Create buckets: index = frequency, value = list of numbers
        vector<vector<int>> buckets(n + 1);
        for (auto& pair : countMap) {
            int num = pair.first;
            int freq = pair.second;
            buckets[freq].push_back(num);
        }
        
        // 3. Gather the top k elements starting from the highest frequency
        vector<int> result;
        for (int i = n; i >= 0; i--) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) {
                    return result;
                }
            }
        }
        
        return result;
    }
};