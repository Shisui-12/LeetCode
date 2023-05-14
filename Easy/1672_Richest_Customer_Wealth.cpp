class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maximal = 0;
        for (auto i : accounts)
        {
             int sum = accumulate(i.begin(),i.end(),0);
            if(sum > maximal)
            {
                maximal = sum;
            }
        }
        return maximal;
    }
};
