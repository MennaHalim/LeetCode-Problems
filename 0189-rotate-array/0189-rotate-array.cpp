class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        
        vector<int> tmp1(k), tmp2(nums.size() - k);
        
        int j =0;
        for(int i = nums.size()- k; i < nums.size(); i++){
            tmp1[j++] = nums[i]; 
        }
        
        j =0;
        for(int i = 0; i <  nums.size()- k; i++){
            tmp2[j++] = nums[i]; 
        }
        
        
        for (int i = 0; i < k; i++){
            nums[i] = tmp1[i];
        }
        
        for (int i = k; i < nums.size(); i++){
            nums[i] = tmp2[i - k];
        }
        
    }
};