METHOD 1: USING HASHING
class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        map<int,int>ans;
        for(int i=0;i<nums.size();i++)
        {
            ans[nums[i]]++;
        }
        int r;
        for(auto x:ans)
        {
            if(x.second>1)
            {
                r=x.first;
            }
        }
        return r;
    }
};
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    
    METHOD 2:-
    
    
    class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        int slow,fast;
        slow=nums[0],fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
            
        }while(slow!=fast);
            
            fast=nums[0];
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
        
    }
};
