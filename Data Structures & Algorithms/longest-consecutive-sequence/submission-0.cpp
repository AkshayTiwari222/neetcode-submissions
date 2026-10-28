class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int best =0;
        for(int x:s){
            if(s.count(x-1)){
                continue;
            }
            int length = 1;
            while (s.count(x + length)) length++;
            best = max(best,length);

        }
        return best;
         
    }
};
