class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = nums1.size();
        int zero_index = m;
        int j = 0;
        for(int i = zero_index; i < len; i++)
        {
          nums1.at(i) = nums2.at(j);
          j++;
        }
        sort(nums1.begin(), nums1.end());
    }
};
