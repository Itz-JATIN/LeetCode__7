class Solution {
public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int count = 1;
        vector<pair<int, int>> store;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                count++;
            }
            else {
                store.push_back({count, nums[i - 1]});
                count = 1;
            }
        }
        store.push_back({count, nums.back()});

        sort(store.rbegin(), store.rend());

        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(store[i].second);
        }

        return ans;
    }
};