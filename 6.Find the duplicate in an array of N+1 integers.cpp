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
