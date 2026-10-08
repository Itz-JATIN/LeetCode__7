class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<pair<string, int>> vs;

    for (int i = 0; i < strs.size(); i++) {
        string key = strs[i];
        sort(key.begin(), key.end());

        vs.push_back({key, i});
    }

    sort(vs.begin(), vs.end());

    unordered_map<string, vector<string>> mp;

    for (int i = 0; i < vs.size(); i++) {
        mp[vs[i].first].push_back(strs[vs[i].second]);
    }

    vector<vector<string>> ans;

    for (auto &p : mp) {
        ans.push_back(p.second);
    }

    return ans;
}
};