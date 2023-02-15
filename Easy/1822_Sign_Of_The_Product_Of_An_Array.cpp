class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg = 0;
        int pos = 0;
        int zero = 0;
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
                zero += 1;
            }
        }
        if (zero > 0)
        {
            return 0;
        }
        else if(neg%2 == 1)
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
};
