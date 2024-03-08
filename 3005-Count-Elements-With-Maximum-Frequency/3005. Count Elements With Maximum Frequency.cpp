class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> mp;
        for(auto i : nums){
            mp[i]++;
        }
        int maxi=0;
        for(auto i : mp)
        {
            maxi = max(maxi, i.second);
        }
        int tot = 0;
        for(auto i: mp)
        {
            if(maxi == i.second){
                tot += i.second;
            }
        }
        return tot;
        
    }
};
