class Solution {
public:
    pair<int,int> check(int n){
        int cnt = 0;
        int sum = 0;
        for(int i = 1; i*i <= n; i++){
            if(n % i == 0) {
                int d1 = i;
                int d2 = n/i;
                cnt++;
                sum += d1;
                if(d1 != d2){
                  cnt++;
                  sum += d2;
                }
            }
        }
        return {cnt,sum};
    }
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            auto [c,s] = check(nums[i]);
            if(c == 4) ans += s;
        }
        return ans;
    }
};