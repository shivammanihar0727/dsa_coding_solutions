class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
     priority_queue<pair<int,pair<int,int>> > pq;
        for(int i=0;i<nums1.size();i++)
        {
            
            for(int j=0;j<nums2.size();j++)
            {
                int ans=nums1[i]+nums2[j];
                pq.push({ans,{nums1[i],nums2[j]}});
                if(pq.size()>k)
                    pq.pop();
            }
        }
        
        pair<int,int> p;
        vector<vector<int>> v;
        while(!pq.empty())
        {
            p=pq.top().second;
            v.push_back({p.first,p.second});
            pq.pop();
        }
        return v;
    }
};
