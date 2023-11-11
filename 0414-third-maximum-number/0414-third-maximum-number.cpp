class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());

        int mx = nums[0], ctr = 1;
        for (int i = 0 ; i <nums.size(); i++){
            if (nums[i] < mx) {
                mx = nums[i];
                ctr++;
            }

            if (ctr == 3 )
            return mx;
        }

        return nums[0];
        //
    }
};