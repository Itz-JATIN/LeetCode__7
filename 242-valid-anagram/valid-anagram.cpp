class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> ans1(26,0);
        for(char ch : s){
            ans1[ch-'a']++;
        }
        for(char ch : t){
            ans1[ch-'a']--;
        }
        for(int i = 0; i < ans1.size(); i++){
            if(ans1[i] > 0 || ans1[i] < 0){
                return false;
            }
        }
        return true;
    }
};