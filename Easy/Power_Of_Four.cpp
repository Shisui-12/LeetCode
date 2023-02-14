class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 0 || n < 0)
        {
            return false;
        }
        if(n == 1)
        {
            return true;
        }
        double r = log(n);
        double l4 = log(4);
        double log4 = r/l4;
        // cout << r << endl;
        // cout << l4 << endl;
        // cout << log4 << endl;
        // cout << (long) log4;
        if(log4 == (long)log4)
        {
            return true;
        }
        return false;

    }
};
