class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector <int> ans {};
        int len = nums.size();
        for (int i = 0; i < len; i++)
        {
            if (i < len - 1)
            {
                for(int j = i + 1; j < len; j++)
                {
                  if (nums.at(i) + nums.at(j) == target)
                   {

                       ans.push_back(i);
                       ans.push_back(j);
                       break;
            }
            }
            }
        }
        return ans;
    }
};
