class Solution {
public:
    int majorityElement(vector<int>& nums) {
        set<int> s (nums.begin(),nums.end());
        int maj = (int)nums.size()/2 + 1;
        for (auto i : s)
        {
            int c1 = count(nums.begin(),nums.end(),i);
            if(c1 >= maj)
            {
                return i;
            }
        }
        return 0;
    }
};
