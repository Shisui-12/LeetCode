class Solution {
public:
    double myPow(double x, int n) {
        if(n == 1)
        {
            return x;
        }
        if (n < 0)
        {
//             long int y = n * -1;
//             long int run;
//             double f = 1;
//             double mul;
//             run = y/2;
//             while (run > 0)
//             {
//                 mul = 1/x*1/x;
//                 run = run - 1;
//                 f *= mul;
//             }
         
//             if (y % 2 != 0)
//             {
//                 f  *= (1/x);
//             }
//                cout << f;
//             return f;
            if (n == -1)
            {
                return 1/x;
            }
            
            return (n%2 == 0) ? myPow(x*x, n/2) : 1/x * myPow(x*x, n/2);
            
        }
        if (n == 0)
        {
            return 1;
        }
        if (n > 0)
        {
            
            return (n%2 == 0) ? myPow(x*x, n/2) : x * myPow(x*x, n/2);
        }
        return 0;
    }
};
