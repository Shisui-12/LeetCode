class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> ans;
        // int n = 2;
        // while(n)
        // {
        //     for(auto i : nums)
        //     {
        //         ans.push_back(i);
        //     }
        //     n--;
        // }
        ans.insert(ans.end(),nums.begin(),nums.end());
        ans.insert(ans.end(),nums.begin(),nums.end());
        
        return ans;
    }
};
