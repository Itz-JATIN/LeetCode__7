class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int count = 1;
        int ans = 0;
        int check = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(check == nums[i]){
                continue;
            }else if(check+1 == nums[i]){
                count++;
                check = nums[i];
            }else{
                ans = max(ans, count);
                count = 1;
                check = nums[i];
            }
        }
        ans = max(ans, count);
        return ans;
    }
};