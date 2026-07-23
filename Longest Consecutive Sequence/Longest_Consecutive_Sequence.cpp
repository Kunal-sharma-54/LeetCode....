class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count = 1,maxp = 0;
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());

        for(int i = 1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            if(nums[i]==nums[i-1]+1){
                count ++;
            }
            else{
                maxp =max(maxp,count);
                count = 1;
            }
        }
        return max(maxp,count);
    }
};