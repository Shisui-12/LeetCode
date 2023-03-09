class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        set <int> s (nums.begin(),nums.end());
        int maj = (int)nums.size()/3;
        // cout << maj << endl;
        vector <int> major_elem;
        for(auto i : s)
        {
            // cout << i << endl;
            int c1 = count(nums.begin(),nums.end(),i);
            if(c1 > maj)
            {
                major_elem.push_back(i);
            }
        }
        return major_elem;
    }
};
