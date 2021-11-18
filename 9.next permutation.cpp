
class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int n = nums.size(), k, l;
      
      //finding the breakpoint, that is number just smaller after that breakpoint occurs
    	for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                break;
            }
        }
      
      // if 54321 is given then simply reverse
    	if (k < 0) {
    	    reverse(nums.begin(), nums.end());
    	} 
      else 
      {
    	    for (l = n - 1; l > k; l--)
          {
                if (nums[l] > nums[k])
                {
                    break;
                }
            } 
    	    swap(nums[k], nums[l]);
    	    reverse(nums.begin() + k + 1, nums.end());
        }
    }
};
