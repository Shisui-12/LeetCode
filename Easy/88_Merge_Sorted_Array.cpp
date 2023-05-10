class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = nums1.size();
        for(int i = m, j = 0; i < len; i++, j++)
        {
          nums1.at(i) = nums2.at(j);
        }
        sort(nums1.begin(), nums1.end());
    }
};
