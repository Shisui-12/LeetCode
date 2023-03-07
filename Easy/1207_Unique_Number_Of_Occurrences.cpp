class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector <int> freq;
        int count1 = 0;
        set <int> s (arr.begin(),arr.end());
        for (auto i : s)
        {
         count1 = count(arr.begin(), arr.end(), i);
         freq.push_back(count1);
        }
        for (auto i : freq)
        {
            cout << i << endl;
        }
        set <int> unique_freq (freq.begin(), freq.end());
        if(unique_freq.size() == freq.size())
        {
            return true;
        }
        return false;
    }
};
