class Solution {
public:
    bool isPowerOfTwo(int n) {
         if(n == 0 || n < 0)
        {
            return false;
        }
        if(n == 1)
        {
            return true;
        }
        double a = log2(n);
        cout << n << endl;

            if(a == (long)a)
        {
            return true;
        }
        
        return false;

        
    }
};
