class Solution {
public:
    long long TimeTaken(int mid, vector<int>& piles){
        
        long long sum = 0;
        for (int i = 0; i < piles.size(); i++) {
            sum += ((long long)piles[i] + mid - 1) / mid;
        }

        return sum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int end = *max_element(piles.begin(), piles.end()), st = 1;
        int ans = 0;
        while(st <= end){
            int mid = (end+st)/2;
            long long time = TimeTaken(mid, piles);
            if(time <= h){
                ans = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return ans;
    }
};