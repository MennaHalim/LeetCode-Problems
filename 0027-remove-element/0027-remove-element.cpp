class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ptr = nums.size() - 1;
        int ctr = 0; 
        for (int i =0; i <nums.size() && ptr >= 0; i++){
            
            while (ptr>=0 &&nums[ptr] == val){
                    nums[ptr--] = -1;
                }
            
            if (nums[i] == val && ptr > i){
                nums[i] = nums[ptr];
                nums[ptr] = -1;
                ptr--;
            }
        }
        
        for(int i =0; i < nums.size(); i++){
            if(nums[i] != -1){
                ctr++;
            }
            else{
                break;
            }
        }
        
        
        return ctr;
    }
};