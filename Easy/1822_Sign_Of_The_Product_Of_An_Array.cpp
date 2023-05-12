class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg = 0;
        int pos = 0;
        // int zero = 0;
         for(auto i : nums)
        {
            if (i < 0)
            {
                neg += 1;
            }
            else if (i > 0)
            {
                pos += 1;
            }
            else
            {
                return 0;
            }
        }
        if(neg%2 == 1)
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
};
