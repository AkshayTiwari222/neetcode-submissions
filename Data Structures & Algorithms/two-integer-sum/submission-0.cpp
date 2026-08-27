class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mapc;
        for(int i=0;i<nums.size();i++){
            int need = target-nums[i];
            if(mapc.count(need)) return {mapc[need],i};
            mapc[nums[i]] = i;
        }
        return{};
    }
};
