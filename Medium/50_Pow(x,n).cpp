class Solution {
 public:
double myPow(double x, int n) {
    if(n == 1)
    {
        return x;
    }
   
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

// This solution checks if the given power is even if yes it squares it up normally otherwise it returns x*squared value for odd powers
// -> This is the only approach that is currently working

if (n < 0)
    {
        long int y = n * -1;
        long int run;
        double f = 1;
        double mul;
        run = y/2;
        while (run > 0)
        {
            mul = 1/x*1/x;
            run = run - 1;
            f *= mul;
        }
     
        if (y % 2 != 0)
        {
            f  *= (1/x);
        }
           cout << f;
        return f;
		
// 		-> This was my initial approach it works for almost all test cases but there is one specifically designed edge case that gives a large unsigned int
// 		if anyone finds some workaround for this it would be awesome Thanks in Advance
