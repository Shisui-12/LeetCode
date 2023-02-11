class Solution {
public:
    int reverse(int x) {
        long a = 0;
        if (x < 0)
        {
            if (x >= INT32_MAX || x <= INT32_MIN)
            {
                a = 0;
                return a;
            }
            else{
                x = x*-1;
            }
            
            string s = to_string(x);
            string rev = string(s.rbegin(), s.rend());
            // cout << rev << endl;
            try{
                a = stoi(rev);
            }
            catch(std::out_of_range){
                    a = 0;
            }
            
            
            // cout << a << endl;
            a = a*-1;
            // cout << a << endl;

        }
        else
        {
         
            string s = to_string(x);
            string rev = string(s.rbegin(), s.rend());
            // cout << rev << endl;
             try{
                a = stoi(rev);
            }
            catch(std::out_of_range){
                    a = 0;
            }
            // cout << a << endl;
        }
        
        return a;
    }
};
