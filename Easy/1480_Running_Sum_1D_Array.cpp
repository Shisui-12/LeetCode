class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> sums;
        int len = nums.size();
        sums.push_back(nums[0]);
        for (int i = 1; i < len; i++)
        {
           int t = i - 1;
           int s = nums[i];
           cout << i << endl;
           while (t >= 0)
           {
               s += nums[t];
               t--;
           }
           sums.push_back(s);
        }
        return sums;
    }
};
