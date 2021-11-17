//reference taken from takeuforward youtube channel;
//the logic behind the question is that you need to return the vector of vectors , so we created mergedintervals. if the size is 0 then there is no overlap for obvious so return 0,
//else create vector names tempinterval, where you will push the merged vectors, so if the 2nd element of current vector is smaller then element present in merged vector then both of the vectors would be merged.
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
code:-
  class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals)
    {
        vector<vector<int>>mergedintervals;
        if(intervals.size()==0)
            return mergedintervals;
        sort(intervals.begin(),intervals.end());
        vector<int>tempintervals=intervals[0];
        
        for(auto it:intervals)
        {
            if(it[0]<=tempintervals[1])
            {
                tempintervals[1]=max(it[1],tempintervals[1]);
            }
            else
            {
                mergedintervals.push_back(tempintervals);
                tempintervals=it;
            }
        }
        
        
        mergedintervals.push_back(tempintervals);
        return mergedintervals;
        
        
    }
};
