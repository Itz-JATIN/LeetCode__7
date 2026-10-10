class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            int st = i+1, end = nums.size()-1;
            
            while(st < end){
                if(nums[i] + nums[st] + nums[end] > 0){
                    end--;
                }else if(nums[i] + nums[st] + nums[end] < 0){
                    st++;
                }else{
                    ans.push_back({nums[i], nums[st], nums[end]});
                    st++;
                    end--;
                    while(st < end && nums[st] == nums[st-1]){
                        st++;
                    }
                    while(st < end && nums[end] == nums[end+1]){
                        end--;
                    }
                }
            }
        }
        return ans;
    }
};