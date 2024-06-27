class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int mx_freq = 0, mx_freq_idx= -1;   
        
        for(int i =0; i <nums.size(); i++){
            
            freq[nums[i]]++;
            if (freq[nums[i]] > mx_freq){
                mx_freq = freq[nums[i]];
                mx_freq_idx = i;
            }
            
        }
        
        return nums[mx_freq_idx];    
    }
};