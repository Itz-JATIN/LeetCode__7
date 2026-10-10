class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi = 0;
        int st = 0, end = height.size()-1;
        while(st < end){
            if(height[st] < height[end]){
                int curr = height[st]*(end-st);
                maxi = max(maxi, curr);
                st++;
            }else{
                int curr = height[end]*(end-st);
                maxi = max(maxi, curr);
                end--;
            }
        }
        return maxi;
    }
};