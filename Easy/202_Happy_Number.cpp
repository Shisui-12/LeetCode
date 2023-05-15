class Solution {
public:
    bool isHappy(int n) {
        unordered_set <int> visited;
        while(true)
        {
            int sum = 0;
            while(n)
             {
                int digit = n % 10;
                sum += digit * digit;
                n = n / 10;
              }
            
            if(sum == 1)
            {
                return true;
            }
            if(visited.find(sum) != visited.end())
            {
                return false;
            }
            visited.insert(sum);
            n = sum;
             
        }
        return false;
    }
};
