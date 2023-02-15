class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        // unsigned long long arr = 0;
        // vector <int> ans;
        // for (auto i : num)
        // {
        //     arr = 10*arr + i;
        //     // cout << arr << endl;
        // }
        // // cout << arr << endl;
        // unsigned long long sum = arr + k;
        // while(sum > 0)
        // {
        //     int rem = sum % 10;
        //     ans.push_back(rem);
        //     sum = sum/10;
        // }
        // reverse(ans.begin(),ans.end());
        // return ans;

        // The above approach fails as there are test cases specifically to fail
        // it

        //Add individual elements approach
        for(int i=num.size()-1;i>=0;i--){
            num[i] += k;
            k = num[i]/10;
            num[i] %= 10;
            // cout << num[i] << endl;
        }
        while(k > 0){
            num.insert(num.begin(), k%10);
            k /= 10;
        }
        return num;

    }
};
